#include <SPI.h>
#include <DMD2.h>
#include <EEPROM.h>
SoftDMD dmd(2, 1);
byte Bright = 1;
byte Num = 0;
byte Max = 0;
byte huruf, one, two, three;
void setup() {
  Serial.begin(9600);
  dmd.begin();
  dmd.drawFilledBox(0, 0, 30, 16, 0);
  baca();
  dmd.setBrightness(((Bright) * 50) - 40);
}
void loop() {
  if (Serial.available()) {
    Serial.print("Max ; ");
    Serial.print(Max);
    char key = Serial.read();
    Serial.println(key);
    if (key == 'A') {
      dmd.drawFilledBox(0, 0, 31, 16, 0);
      m(1);
      b(14);
      X(26);
      huruf = 1;
    }
    else if (key == 'B') {
      dmd.drawFilledBox(0, 0, 31, 16, 0);
      p(1);
      s(14);
      X(26);
      huruf = 2;
    }
    else if (key == 'C') {
      dmd.drawFilledBox(0, 0, 31, 16, 0);
      k(1);
      a(12);
      X(26);
      huruf = 3;
    }
    else if (key == 'D') {
      dmd.drawFilledBox(0, 0, 31, 16, 0);
      b(1);
      k(14);
      X(26);//26
      huruf = 4;
    }
    else if (key == '*') {
      Bright++;
      if (Bright > 5) {
        Bright = 1;

      }
      dmd.setBrightness(((Bright) * 50) - 40);
    }
    else if (key == '#') {
      Max--;
      if (Max == 255) {
        Max = 0;
      }
      dmd.drawFilledBox(31 + (Max * 11), 0, 31 + ((Max + 1) * 11), 16, 0);
    }
    else {
      if (Max <= 2) {
        Serial.print("Max:");
        Serial.print(Max);
        if (key == '0') {
          
          nol(31 + (Max * 11));
          save(10);
          Max++;
        }
        else if (key == '1') {
          satu(31 + (Max * 11));
          save(1);
          Max++;
        }
        else if (key == '2') {
          dua(31 + (Max * 11));
          save(2);
          Max++;
        }
        else if (key == '3') {
          tiga(31 + (Max * 11));
          save(3);
          Max++;
        }
        else if (key == '4') {
          empat(31 + (Max * 11));
          save(4);
          Max++;
        }
        else if (key == '5') {
          lima(31 + (Max * 11));
          save(5);
          Max++;
        }
        else if (key == '6') {
          enam(31 + (Max * 11));
          save(6);
          Max++;
        }
        else if (key == '7') {
          tujuh(31 + (Max * 11));
          save(7);
          Max++;
        }
        else if (key == '8') {
          delapan(31 + (Max * 11));
          save(8);
          Max++;
        }
        else if (key == '9') {
          sembilan(31 + (Max * 11));
          save(9);
          Max++;
        }
      }
      else {
        if (key == '0') {
          if (Num <= 1) {
            Num++;
          }
          else if (Num > 1) {

            EEPROM.write(2, huruf);
            EEPROM.write(3, one);
            EEPROM.write(4, two);
            EEPROM.write(5, three);
            EEPROM.write(6, Bright);
            Num = 0;
            Serial.println("Saved");
          }
        }
      }
    }
  }
}
