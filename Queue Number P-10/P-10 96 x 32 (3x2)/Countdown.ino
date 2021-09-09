#include <SPI.h>
#include <DMD2.h>
#include <EEPROM.h>
SoftDMD dmd(3, 2);
byte Bright = 1;
byte Num = 0;
byte Max = 0;
byte huruf, one, two, three;
void setup() {
  Serial.begin(9600);
  dmd.begin();
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
      dmd.drawFilledBox(0, 0, 41, 31, 0);
      m(1);
      b(19);
      X(37);
      huruf = 1;
    }
    else if (key == 'B') {
      dmd.drawFilledBox(0, 0, 41, 31, 0);
      p(1);
      s(19);
      X(37);
      huruf = 2;
    }
    else if (key == 'C') {
      dmd.drawFilledBox(0, 0, 41, 31, 0);
      k(1);
      a(19);
      X(37);
      huruf = 3;
    }
    else if (key == 'D') {
      dmd.drawFilledBox(0, 0, 41, 31, 0);
      b(1);
      k(19);
      X(37);//26
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
      dmd.drawFilledBox(42 + (Max * 18), 0, 42 + ((Max + 1) * 18), 31, 0);
    }
    else {
      if (Max <= 2) {
        Serial.print("Max:");
        Serial.print(Max);
        if (key == '0') {
          nol(42 + (Max * 18));
          save(10);
          Max++;
        }
        else if (key == '1') {
          satu(42 + (Max * 18));
          save(1);
          Max++;
        }
        else if (key == '2') {
          dua(42 + (Max * 18));
          save(2);
          Max++;
        }
        else if (key == '3') {
          tiga(42 + (Max * 18));
          save(3);
          Max++;
        }
        else if (key == '4') {
          empat(42 + (Max * 18));
          save(4);
          Max++;
        }
        else if (key == '5') {
          lima(42 + (Max * 18));
          save(5);
          Max++;
        }
        else if (key == '6') {
          enam(42 + (Max * 18));
          save(6);
          Max++;
        }
        else if (key == '7') {
          tujuh(42 + (Max * 18));
          save(7);
          Max++;
        }
        else if (key == '8') {
          delapan(42 + (Max * 18));
          save(8);
          Max++;
        }
        else if (key == '9') {
          sembilan(42 + (Max * 18));
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
