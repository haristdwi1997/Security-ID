void baca()  {
  if (EEPROM.read(2) != 0) {
    huruf = EEPROM.read(2);
    if (huruf == 1) {
      m(1);
      b(14);
      X(26);
    }
    else if (huruf == 2) {
      p(1);
      s(14);
      X(26);
    }
    else if (huruf == 3) {
      k(1);
      a(12);
      X(26);
    }
    else if (huruf == 4) {
      b(1);
      k(14);
      X(26);//26
    }
  }
  if (EEPROM.read(3) != 0) {
    one = EEPROM.read(3);
    if (one == 10) {
    Max = 0;
      nol(31 + (Max * 11));
      Max++;
    }
    else if (one == 1) {
    Max = 0;
      satu(31 + (Max * 11));
      Max++;
    }
    else if (one == 2) {
    Max = 0;
      dua(31 + (Max * 11));
      Max++;
    }
    else if (one == 3) {
    Max = 0;
      tiga(31 + (Max * 11));
      Max++;
    }
    else if (one == 4) {
    Max = 0;
      empat(31 + (Max * 11));
      Max++;
    }
    else if (one == 5) {
    Max = 0;
      lima(31 + (Max * 11));
      Max++;
    }
    else if (one == 6) {
    Max = 0;
      enam(31 + (Max * 11));
      Max++;
    }
    else if (one == 7) {
    Max = 0;
      tujuh(31 + (Max * 11));
      Max++;
    }
    else if (one == 8) {
    Max = 0;
      delapan(31 + (Max * 11));
      Max++;
    }
    else if (one == 9) {
    Max = 0;
      sembilan(31 + (Max * 11));
      Max++;
    }
  }
  if (EEPROM.read(4) != 0) {
    two = EEPROM.read(4);
    if (two == 10) {
    Max = 1;
      nol(31 + (Max * 11));
      Max++;
    }
    else if (two == 1) {
    Max = 1;
      satu(31 + (Max * 11));
      Max++;
    }
    else if (two == 2) {
    Max = 1;
      dua(31 + (Max * 11));
      Max++;
    }
    else if (two == 3) {
    Max = 1;
      tiga(31 + (Max * 11));
      Max++;
    }
    else if (two == 4) {
    Max = 1;
      empat(31 + (Max * 11));
      Max++;
    }
    else if (two == 5) {
    Max = 1;
      lima(31 + (Max * 11));
      Max++;
    }
    else if (two == 6) {
    Max = 1;
      enam(31 + (Max * 11));
      Max++;
    }
    else if (two == 7) {
    Max = 1;
      tujuh(31 + (Max * 11));
      Max++;
    }
    else if (two == 8) {
    Max = 1;
      delapan(31 + (Max * 11));
      Max++;
    }
    else if (two == 9) {
    Max = 1;
      sembilan(31 + (Max * 11));
      Max++;
    }
  }
  if (EEPROM.read(5) != 0) {
    three = EEPROM.read(5);
    if (three == 10) {
    Max = 2;
      nol(31 + (Max * 11));
      Max++;
    }
    else if (three == 1) {
    Max = 2;
      satu(31 + (Max * 11));
      Max++;
    }
    else if (three == 2) {
    Max = 2;
      dua(31 + (Max * 11));
      Max++;
    }
    else if (three == 3) {
    Max = 2;
      tiga(31 + (Max * 11));
      Max++;
    }
    else if (three == 4) {
    Max = 2;
      empat(31 + (Max * 11));
      Max++;
    }
    else if (three == 5) {
    Max = 2;
      lima(31 + (Max * 11));
      Max++;
    }
    else if (three == 6) {
    Max = 2;
      enam(31 + (Max * 11));
      Max++;
    }
    else if (three == 7) {
    Max = 2;
      tujuh(31 + (Max * 11));
      Max++;
    }
    else if (three == 8) {
    Max = 2;
      delapan(31 + (Max * 11));
      Max++;
    }
    else if (three == 9) {
    Max = 2;
      sembilan(31 + (Max * 11));
      Max++;
    }
  }

  if (EEPROM.read(6) != 0) {
    Bright = EEPROM.read(6);
  }
}
void save(int x) {
  if (Max == 0) {
    one = x;
  }
  else if (Max == 1) {
    two = x;
  }
  else if (Max == 2) {
    three = x;
  }
}
