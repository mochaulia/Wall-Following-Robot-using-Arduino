void ref_belakang1() {
  if (cm6 > 150 || cm6 == 0) {
    posisi = 14;//14
    rem();
    delay(500);
  }
}
void ref_belakang2() {
  if (cm6 > 150 || cm6 == 0) {
    rem();
    delay(500);
    posisi = 26;//26
  }
}
void deteksi_belakang1() {
  if (cm5 >= 2 && cm5 <= 60 && cm6 >= 2 && cm6 <= 60) {
    rem();
    delay(300);
    mundur_100();
    delay(200);
    posisi = 25;
  }
}
void gerak_belakang_kiri() {
  if (cm5 >= 4 && cm5 <= 7 && cm6 >= 4 && cm6 <= 7) {
    mundur_100();
  }
  else if (cm5 > 8 && cm5 <= 15 && cm6 > 5 && cm6 <= 15) {
    kiri3();
  }
  else if (cm5 > 15 && cm5 <= 50 && cm6 > 15 && cm6 <= 50) {
    kiri2();
  }
  else if (cm5 > 50 && cm5 <= 100 && cm6 > 50 && cm6 <= 100) {
    kiri1();
  }
  //==========================================
  else if (cm5 == 8 && cm6 > 5 && cm6 <= 7 ) {
    belok_kiri4();
  }
  else if (cm5 == 9 && cm6 > 5 && cm6 <= 7 ) {
    belok_kiri4();
  }
  else if (cm5 == 10 && cm6 > 5 && cm6 <= 7 ) {
    belok_kiri5();
  }
  else if (cm5 == 11 && cm6 > 5 && cm6 <= 7 ) {
    belok_kiri5();
  }
  else if (cm5 == 12 && cm6 > 5 && cm6 <= 7 ) {
    belok_kiri6();
  }
  //==========================================

  else if (cm5 == 8 && cm6 == 8) {
    belok_kiri4();
  }
  else if (cm5 == 9 && cm6 == 8) {
    belok_kiri5();
  }
  else if (cm5 == 10 && cm6 == 8) {
    belok_kiri5();
  }
  else if (cm5 == 11 && cm6 == 8) {
    belok_kiri6();
  }
  else if (cm5 == 12 && cm6 == 8) {
    belok_kiri6();
  }
  //==========================================
  else if (cm5 == 8 && cm6 == 9) {
    belok_kiri4();
  }
  else if (cm5 == 9 && cm6 == 9) {
    belok_kiri5();
  }
  else if (cm5 == 10 && cm6 == 9) {
    belok_kiri6();
  }
  else if (cm5 == 11 && cm6 == 9) {
    belok_kiri6();
  }
  else if (cm5 == 12 && cm6 == 9) {
    belok_kiri6();
  }
  //==========================================
  //==========================================
  //==========================================
  else if (cm6 == 8 && cm5 > 5 && cm5 <= 7 ) {
    belok_kanan4();
  }
  else if (cm6 == 9 && cm5 > 5 && cm5 <= 7 ) {
    belok_kanan4();
  }
  else if (cm6 == 10 && cm5 > 5 && cm5 <= 7 ) {
    belok_kanan5();
  }
  else if (cm6 == 11 && cm5 > 5 && cm5 <= 7 ) {
    belok_kanan5();
  }
  else if (cm6 == 12 && cm5 > 5 && cm5 <= 7 ) {
    belok_kanan6();
  }
  //==========================================

  else if (cm6 == 8 && cm5 == 8) {
    belok_kanan4();
  }
  else if (cm6 == 9 && cm5 == 8) {
    belok_kanan5();
  }
  else if (cm6 == 10 && cm5 == 8) {
    belok_kanan5();
  }
  else if (cm6 == 11 && cm5 == 8) {
    belok_kanan6();
  }
  else if (cm6 == 12 && cm5 == 8) {
    belok_kanan6();
  }
  //==========================================
  else if (cm6 == 8 && cm5 == 9) {
    belok_kanan4();
  }
  else if (cm6 == 9 && cm5 == 9) {
    belok_kanan5();
  }
  else if (cm6 == 10 && cm5 == 9) {
    belok_kanan6();
  }
  else if (cm6 == 11 && cm5 == 9) {
    belok_kanan6();
  }
  else if (cm6 == 12 && cm5 == 9) {
    belok_kanan6();
  }
}
//==========================================
void belok_kiri4() {
  en_aktif();
  analogWrite(RPWM3, 60);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 100);
}
void belok_kiri5() {
  en_aktif();
  analogWrite(RPWM3, 80);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 100);
}
void belok_kiri6() {
  en_aktif();
  analogWrite(RPWM3, 100);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 100);
}
//==========================================
void belok_kanan4() {
  en_aktif();
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM1, 60);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 100);
}
void belok_kanan5() {
  en_aktif();
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 100);
}
void belok_kanan6() {
  en_aktif();
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM1, 100);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 100);
}
//==========================================
void kiri1() {
  en_aktif();
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, kec / 2);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, kec / 2);
}
void kiri2() {
  en_aktif();
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, kec / 4);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, kec / 4);
}
void kiri3() {
  en_aktif();
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, kec / 6);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, kec / 6);
}
