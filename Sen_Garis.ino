//void meluruskan1() {
//  if (sen[11] < sen_avr[11] || sen[10] < sen[10] || sen[9] < sen_avr[9] || sen[8] < sen_avr[8] || sen[7] < sen_avr[7]) {
//    kiri_lambat();
//  }
//  else if (sen[4] < sen_avr[4] || sen[3] < sen_avr[3] || sen[2] < sen_avr[2] || sen[1] < sen_avr[1] || sen[0] < sen_avr[0]) {
//    kanan_lambat();
//  }
//  else if (sen[5] < sen_avr[5] || sen[6] < sen_avr[6]) {
//    rem();
//    delay(300);
//    posisi = 10;
//  }
//}
//void meluruskan2() {
//  if (sen[11] < sen_avr[11] || sen[10] < sen[10] || sen[9] < sen_avr[9] || sen[8] < sen_avr[8] || sen[7] < sen_avr[7]) {
//    kiri_lambat();
//  }
//  else if (sen[4] < sen_avr[4] || sen[3] < sen_avr[3] || sen[2] < sen_avr[2] || sen[1] < sen_avr[1] || sen[0] < sen_avr[0]) {
//    kanan_lambat();
//  }
//  else if (sen[5] < sen_avr[5] || sen[6] < sen_avr[6]) {
//    rem();
//    delay(300);
//    posisi = 22;
//  }
//}
//void meluruskan3() {
//  if (sen[11] < sen_avr[11] || sen[10] < sen[10] || sen[9] < sen_avr[9] || sen[8] < sen_avr[8] || sen[7] < sen_avr[7]) {
//    kiri_lambat();
//  }
//  else if (sen[4] < sen_avr[4] || sen[3] < sen_avr[3] || sen[2] < sen_avr[2] || sen[1] < sen_avr[1] || sen[0] < sen_avr[0]) {
//    kanan_lambat();
//  }
//  else if (sen[5] < sen_avr[5] || sen[6] < sen_avr[6]) {
//    rem();
//    delay(300);
//    posisi = 32;
//  }
//}
void deteksi_sensor1() {
  if (sen[2] < sen_avr[2] || sen[3] < sen_avr[3] || sen[4] < sen_avr[4]) {
    rem();
    delay(400);
    kiri_10();
    Serial1.write('A');
    posisi = 11;//11
  }
}
void deteksi_sensor2() {
  if (sen[2] < sen_avr[2] || sen[3] < sen_avr[3] || sen[4] < sen_avr[4]) {
    kanan_50();
    delay(200);
    rem();
    delay(400);
    posisi = 12;//12
  }
}
void deteksi_sensor3() {
  if (sen[2] < sen_avr[2] || sen[3] < sen_avr[3] || sen[4] < sen_avr[4]) {
    maju_50();
    delay(800);
    rem();
    delay(300);
    kiri_30();
    Serial1.write('A');
    delay(100);
    posisi = 18;//17
  }
}
void deteksi_sensor4() {
  if (sen[2] < sen_avr[2] || sen[3] < sen_avr[3] || sen[4] < sen_avr[4]) {
    rem();
    delay(300);
    posisi = 19; //19
  }
}
void deteksi_sensor5() {
  if (sen[2] < sen_avr[2] || sen[3] < sen_avr[3] || sen[4] < sen_avr[4]) {
    rem();
    Serial1.write('B');
    delay(300);
    posisi = 52; //13
  }
}
void deteksi_sensor6() {
  if (sen[2] < sen_avr[2] || sen[3] < sen_avr[3] || sen[4] < sen_avr[4]) {
    rem();
    delay(300);
    posisi = 23;
  }
}
void deteksi_sensor7() {
  if (sen[2] < sen_avr[2] || sen[3] < sen_avr[3]) {
    rem();
    delay(300);
    posisi = 13;
  }
}
void deteksi_sensor8() {
  if (sen[2] < sen_avr[2] || sen[3] < sen_avr[3]) {
    kiri_lambat();
    delay(1200);
    rem();
    delay(300);
    posisi = 10;//10
  }
}
void deteksi_sensor9() {
  if (sen[2] < sen_avr[2] || sen[3] < sen_avr[3]) {
    rem();
    delay(400);
    posisi = 22;//22
  }
}
void deteksi_sensor10() {
  if (sen[2] < sen_avr[2] || sen[3] < sen_avr[3]) {
    rem();
    delay(400);
    posisi = 17;//17
  }
}
void baca_sensor() {
  sen[0] = analogRead(A0);//kanan
  sen[1] = analogRead(A1);
  sen[2] = analogRead(A2);
  sen[3] = analogRead(A3);
  sen[4] = analogRead(A4);
  sen[5] = analogRead(A5);
}
void baca_sensor_mirror() {
  sen[0] = analogRead(A5);
  sen[1] = analogRead(A4);
  sen[2] = analogRead(A3);
  sen[3] = analogRead(A2);
  sen[4] = analogRead(A1);
  sen[5] = analogRead(A0);// kiri
}
void baca_sensor1() {
  digitalWrite(en_sen1, HIGH);
  digitalWrite(en_sen2, HIGH);
  baca_sensor();
}
void baca_sensor2() {
  digitalWrite(en_sen2, HIGH);
  digitalWrite(en_sen1, LOW);
  baca_sensor();
}
void sensor_garis_mati() {
  digitalWrite(en_sen1, LOW);
  digitalWrite(en_sen2, LOW);
}
void sen_average() {
  for (i = 0; i <= 5; i++) {
    if (sen[i] < sen_min[i]) {
      sen_min[i] = sen[i];
    }
    else if (sen[i] > sen_max[i]) {
      sen_max[i] = sen[i];
    }
    sen_avr[i] = (sen_min[i] + sen_max[i]) / 2;
  }
}
void read_sensor() {
  j = 1;
  for (i = 0; i <= 5; i++) {
    xx[i] = EEPROM.read(j);
    y[i] = EEPROM.read(j + 1);
    z[i] = EEPROM.read(j + 2);
    sen_avr[i] = (z[i]) + (y[i] * 100) + (xx[i] * 1000);
    j = j + 3;
  }
}
void write_sensor() {
  j = 1;
  for (i = 0; i <= 5; i++) {
    xx[i] = sen_avr[i] / 1000;
    y[i] = (sen_avr[i] % 1000) / 100;
    z[i] = sen_avr[i] % 100;
    EEPROM.write(j, xx[i]);
    EEPROM.write(j + 1, y[i]);
    EEPROM.write(j + 2, z[i]);
    j = j + 3;
  }
}
