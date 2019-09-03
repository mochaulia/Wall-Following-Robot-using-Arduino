void deteksi_kiri1() {
  if (cm3 >= 2 && cm3 <= 60 && cm4 >= 2 && cm4 <= 60) {
    rem();
    delay(300);
    kiri_150();
    delay(300);
    rem();
    posisi = 25;//25
  }
}
void ref_kiri1() {
  if (cm3 > 150 || cm3 == 0) {
    rem();
    delay(300);
    posisi = 26;
  }
}
void ref_kiri2() {
  if (cm1 > 150 || cm1 == 0) {
    rem();
    delay(300);
    posisi = 35;
  }
}
void gerak_kiri_maju() {
  if (cm1 >= 2 && cm1 <= 5 && cm2 >= 2 && cm2 <= 5) {
    kiri_175();
  }
  else if (cm1 > 8 && cm1 <= 15 && cm2 > 5 && cm2 <= 15) {
    maju_30();
  }
  else if (cm1 > 15 && cm1 <= 50 && cm2 > 15 && cm2 <= 50) {
    maju_50();
  }
  else if (cm1 > 50 && cm1 <= 90 && cm2 > 50 && cm2 <= 90) {
    maju_80();
  }
  //==========================================
  else if (cm1 == 4 && cm2 == 3) {
    belok_kanan_mundur();
  }
  else if (cm1 == 5 && cm2 == 3) {
    belok_kanan_mundur();
  }
  else if (cm1 == 6 && cm2 == 3) {
    belok_kanan_mundur();
  }
  else if (cm1 == 7 && cm2 == 3) {
    belok_kanan_mundur();
  }
  else if (cm1 == 8 && cm2 == 3) {
    belok_kanan_mundur();
  }
  //==========================================

  else if (cm1 == 4 && cm2 == 4) {
    belok_kanan_mundur();
  }
  else if (cm1 == 5 && cm2 == 4) {
    belok_kanan_mundur();
  }
  else if (cm1 == 6 && cm2 == 4) {
    belok_kanan_mundur();
  }
  else if (cm1 == 7 && cm2 == 4) {
    belok_kanan_mundur();
  }
  else if (cm1 == 8 && cm2 == 4) {
    belok_kanan_mundur();
  }
  //==========================================
  else if (cm1 == 4 && cm2 == 5) {
    belok_kanan_mundur();
  }
  else if (cm1 == 5 && cm2 == 5) {
    belok_kanan_mundur();
  }
  else if (cm1 == 6 && cm2 == 5) {
    belok_kanan_mundur();
  }
  else if (cm1 == 7 && cm2 == 5) {
    belok_kanan_mundur();
  }
  else if (cm1 == 8 && cm2 == 5) {
    belok_kanan_mundur();
  }
  //==========================================
  //==========================================
  //==========================================
  else if (cm2 == 4 && cm1 == 3) {
    belok_kiri_mundur();
  }
  else if (cm2 == 5 && cm1 == 3) {
    belok_kiri_mundur();
  }
  else if (cm2 == 6 && cm1 == 3) {
    belok_kiri_mundur();
  }
  else if (cm2 == 7 && cm1 == 3) {
    belok_kiri_mundur();
  }
  else if (cm2 == 8 && cm1 == 3) {
    belok_kiri_mundur();
  }
  //==========================================

  else if (cm2 == 4 && cm1 == 4) {
    belok_kiri_mundur();
  }
  else if (cm2 == 5 && cm1 == 4) {
    belok_kiri_mundur();
  }
  else if (cm2 == 6 && cm1 == 4) {
    belok_kiri_mundur();
  }
  else if (cm2 == 7 && cm1 == 4) {
    belok_kiri_mundur();
  }
  else if (cm2 == 8 && cm1 == 4) {
    belok_kiri_mundur();
  }
  //==========================================
  else if (cm2 == 4 && cm1 == 5) {
    belok_kiri_mundur();
  }
  else if (cm2 == 5 && cm1 == 5) {
    belok_kiri_mundur();
  }
  else if (cm2 == 6 && cm1 == 5) {
    belok_kiri_mundur();
  }
  else if (cm2 == 7 && cm1 == 5) {
    belok_kiri_mundur();
  }
  else if (cm2 == 8 && cm1 == 5) {
    belok_kiri_mundur();
  }
}


//=======================================MAJU2=================================================
//void gerak_kiri_maju2() {
//  if (cm1 >= 2 && cm1 <= 5 && cm2 >= 2 && cm2 <= 5) {
//    kiri_2();
//  }
//  else if (cm1 > 8 && cm1 <= 15 && cm2 > 5 && cm2 <= 15) {
//    maju_30();
//  }
//  else if (cm1 > 15 && cm1 <= 50 && cm2 > 15 && cm2 <= 50) {
//    maju_50();
//  }
//  else if (cm1 > 50 && cm1 <= 90 && cm2 > 50 && cm2 <= 90) {
//    maju_80();
//  }
//  //==========================================
//  else if (cm1 == 4 && cm2 == 3) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 5 && cm2 == 3) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 6 && cm2 == 3) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 7 && cm2 == 3) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 8 && cm2 == 3) {
//    belok_kanan_mundur();
//  }
//  //==========================================
//
//  else if (cm1 == 4 && cm2 == 4) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 5 && cm2 == 4) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 6 && cm2 == 4) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 7 && cm2 == 4) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 8 && cm2 == 4) {
//    belok_kanan_mundur();
//  }
//  //==========================================
//  else if (cm1 == 4 && cm2 == 5) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 5 && cm2 == 5) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 6 && cm2 == 5) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 7 && cm2 == 5) {
//    belok_kanan_mundur();
//  }
//  else if (cm1 == 8 && cm2 == 5) {
//    belok_kanan_mundur();
//  }
//  //==========================================
//  //==========================================
//  //==========================================
//  else if (cm2 == 4 && cm1 == 3) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 5 && cm1 == 3) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 6 && cm1 == 3) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 7 && cm1 == 3) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 8 && cm1 == 3) {
//    belok_kiri_mundur();
//  }
//  //==========================================
//
//  else if (cm2 == 4 && cm1 == 4) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 5 && cm1 == 4) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 6 && cm1 == 4) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 7 && cm1 == 4) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 8 && cm1 == 4) {
//    belok_kiri_mundur();
//  }
//  //==========================================
//  else if (cm2 == 4 && cm1 == 5) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 5 && cm1 == 5) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 6 && cm1 == 5) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 7 && cm1 == 5) {
//    belok_kiri_mundur();
//  }
//  else if (cm2 == 8 && cm1 == 5) {
//    belok_kiri_mundur();
//  }
//}
