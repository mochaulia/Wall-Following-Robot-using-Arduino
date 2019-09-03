void ref_depan1() {
  if (cm2 > 90 || cm2 == 0) {
    rem();
    delay(400);
    posisi = 4;
  }
}
void ref_depan2() {
  if (cm2 > 90 || cm2 == 0) {
    rem();
    delay(400);
    posisi = 14;
  }
}
void ref_depan3() {
  if (cm1 > 90 || cm1 == 0) {
    //    rem();
    //    delay(400);
    posisi = 12;
  }
}
void ref_depan4() {
  if (cm1 > 90 || cm1 == 0) {
    rem();
    delay(400);
    posisi = 24;
  }
}
void ref_depan5() {
  if (cm1 > 90 || cm1 == 0) {
    rem();
    delay(400);
    posisi = 5;
  }
}
void ref_depan6() {
  if (cm1 > 90 || cm1 == 0) {
    //    rem();
    //    delay(400);
    posisi = 4;//4
  }
}
void deteksi_depan1() {
  if (cm1 >= 2 && cm1 <= 100 && cm2 >= 2 && cm2 <= 100) {
    //    maju3();
    //    delay(500);
    posisi = 10;
  }
}
void deteksi_depan2() {
  if (cm1 >= 2 && cm1 <= 7 && cm2 >= 2 && cm2 <= 7) {
    rem();
    delay(500);
    posisi = 18;
  }
}
void deteksi_depan3() {
  if (cm1 >= 2 && cm1 <= 100 && cm2 >= 2 && cm2 <= 100) {
    rem();
    delay(100);
    maju_30();
    delay(100);
    muter_kanan_b();
    delay(200);
    posisi = 20;//20
  }
}
void deteksi_depan4() {
  if (cm1 >= 2 && cm1 <= 50 && cm2 >= 2 && cm2 <= 50) {
    //    muter_kiri_a();
    //    delay(200);
    //    rem();
    //    delay(300);
    kanan_200();
    delay(150);
    posisi = 30;//30
  }
}
void deteksi_depan5() {
  if (cm1 >= 2 && cm1 <= 50 && cm2 >= 2 && cm2 <= 50) {
    //    rem();
    //    delay(300);
    posisi = 13;//13
  }
}
void deteksi_depan6() {
  if (cm1 >= 2 && cm1 <= 50 && cm2 >= 2 && cm2 <= 50) {
    //    rem();
    //    delay(300);
    posisi = 20;//20
  }
}
void deteksi_depan7() {
  if (cm1 >= 2 && cm1 <= 50 && cm2 >= 2 && cm2 <= 50) {
    //    rem();
    //    delay(300);
    posisi = 54;//54
  }
}
