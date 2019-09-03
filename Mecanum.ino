//===================================================================
void m1() {
  en_aktif();
  analogWrite(LPWM1, kec / 4);
  analogWrite(RPWM1, 0);
}
void m2() {
  en_aktif();

  analogWrite(LPWM2, kec / 4);
  analogWrite(RPWM2, 0);
}
void m3() {
  en_aktif();

  analogWrite(LPWM3, kec / 4);
  analogWrite(RPWM3, 0);
}
void m4() {
  en_aktif();

  analogWrite(LPWM4, kec / 4);
  analogWrite(RPWM4, 0);
}
//====================================================================================================
void kanan_30 () {
  en_aktif();
  analogWrite(LPWM1, 30);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 30);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 30);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 30);
  analogWrite(RPWM4, 0);
}
void kanan_50 () {
  en_aktif();
  analogWrite(LPWM1, 50);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 50);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 50);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 50);
  analogWrite(RPWM4, 0);
}
void kanan_80 () {
  en_aktif();
  analogWrite(LPWM1, 80);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 80);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 80);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 80);
  analogWrite(RPWM4, 0);
}
void kanan_100 () {
  en_aktif();
  analogWrite(LPWM1, 100);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 100);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 100);
  analogWrite(RPWM4, 0);
}
void kanan_175 () {
  en_aktif();
  analogWrite(LPWM1, 175);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 175);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 175);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 175);
  analogWrite(RPWM4, 0);
}
void kanan_200 () {
  en_aktif();
  analogWrite(LPWM1, 200);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 200);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 200);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 200);
  analogWrite(RPWM4, 0);
}
void kanan_175a () {
  en_aktif();
  analogWrite(LPWM1, 175);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 175);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 175);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 175);
  analogWrite(RPWM4, 0);
}
void kanan_for_pos1() {
  en_aktif();
  for (aul = 0; aul <= 230; aul++) {
    analogWrite(LPWM1, aul);
    analogWrite(RPWM1, 0);
    analogWrite(LPWM3, aul);
    analogWrite(RPWM3, 0);
    analogWrite(LPWM2, aul);
    analogWrite(RPWM2, 0);
    analogWrite(LPWM4, aul);
    analogWrite(RPWM4, 0);
    delay(2);
  }
}
void brake_pos1(){
  en_aktif();
  for(ratu = 230; ratu<=0; ratu--){
    analogWrite(LPWM1, ratu);
    analogWrite(RPWM1, 0);
    analogWrite(LPWM3, ratu);
    analogWrite(RPWM3, 0);
    analogWrite(LPWM2, ratu);
    analogWrite(RPWM2, 0);
    analogWrite(LPWM4, ratu);
    analogWrite(RPWM4, 0);
    delay(4);
  }
}
void rem_for() {
  en_aktif();
  for (k = 200; k <= 0; k--) {
    analogWrite(LPWM1, k);
    analogWrite(RPWM1, 0);
    analogWrite(LPWM3, k);
    analogWrite(RPWM3, 0);
    analogWrite(LPWM2, k);
    analogWrite(RPWM2, 0);
    analogWrite(LPWM4, k);
    analogWrite(RPWM4, 0);
    delay(6);
  }
}
//maju
void maju_30 () {
  en_aktif();
  analogWrite(LPWM1, 30);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 30);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 30);
  analogWrite(LPWM4, 30);
  analogWrite(RPWM4, 0);
}
void maju_50 () {
  en_aktif();
  analogWrite(LPWM1, 50);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 50);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 50);
  analogWrite(LPWM4, 50);
  analogWrite(RPWM4, 0);
}
void maju_80 () {
  en_aktif();
  analogWrite(LPWM1, 80);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 80);
  analogWrite(LPWM4, 80);
  analogWrite(RPWM4, 0);
}
void maju_100 () {
  en_aktif();
  analogWrite(LPWM1, 100);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 100);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 100);
  analogWrite(LPWM4, 100);
  analogWrite(RPWM4, 0);
}
void maju_125 () {
  en_aktif();
  analogWrite(LPWM1, 125);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 125);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 125);
  analogWrite(LPWM4, 125);
  analogWrite(RPWM4, 0);
}
void maju_175 () {
  en_aktif();
  analogWrite(LPWM1, 175);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 175);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 175);
  analogWrite(LPWM4, 175);
  analogWrite(RPWM4, 0);
}
void maju_pos2() {
  en_aktif();
  for (aul = 0; aul <= 125; aul++) {
    analogWrite(LPWM1, aul);
    analogWrite(RPWM1, 0);
    analogWrite(LPWM3, 0);
    analogWrite(RPWM3, aul);
    analogWrite(LPWM2, 0);
    analogWrite(RPWM2, aul);
    analogWrite(LPWM4, aul);
    analogWrite(RPWM4, 0);
    delay(3);
  }
}
void brake_pos2() {
  en_aktif();
  for (aul = 125; aul <= 0; aul--) {
    analogWrite(LPWM1, aul);
    analogWrite(RPWM1, 0);
    analogWrite(LPWM3, 0);
    analogWrite(RPWM3, aul);
    analogWrite(LPWM2, 0);
    analogWrite(RPWM2, aul);
    analogWrite(LPWM4, aul);
    analogWrite(RPWM4, 0);
    delay(4);
  }
}

//mundur
void mundur_50 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 50);
  analogWrite(LPWM3, 50);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 50);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 50);
}
void mundur_80 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 80);
  analogWrite(LPWM3, 80);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 80);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 80);
}
void mundur_100 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 100);
  analogWrite(LPWM3, 100);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 100);
}
void mundur_175 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 175);
  analogWrite(LPWM3, 175);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 175);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 175);
}

//kiri
void kiri_10 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 20);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 20);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 40);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 20);
}
void kiri_50 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 50);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 50);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 50);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 50);
}
void kiri_30 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 30);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 30);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 30);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 30);
}
void kiri_80 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 80);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 80);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 80);
}
void kiri_100 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 100);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 100);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 100);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 100);
}
void kiri_150 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 150);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 150);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 150);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 150);
}
void kiri_175 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 175);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 175);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 175);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 175);
}

//kanan-mundur
void kanan_mundur_50 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 50);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 50);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 0);
}
void kanan_mundur_80 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 80);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 80);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 0);
}
void kanan_mundur_100 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 100);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 0);
}
void kanan_mundur_175 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 175);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 175);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 0);
}

//kiri maju
void kiri_maju_50 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 50);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 50);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 0);
}
void kiri_maju_80 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 80);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 0);
}
void kiri_maju_100 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 100);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 100);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 0);
}
void kiri_maju_175 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 175);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 175);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 0);
}

//kanan-maju
void kanan_maju_special_50() {
  en_aktif();
  analogWrite(LPWM1, 80);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 200);
  analogWrite(LPWM2, 80);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 200);
  analogWrite(RPWM4, 0);
}
void kanan_maju_50 () {
  en_aktif();
  analogWrite(LPWM1, 50);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 50);
  analogWrite(RPWM4, 0);
}
void kanan_maju_80 () {
  en_aktif();
  analogWrite(LPWM1, 80);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 80);
  analogWrite(RPWM4, 0);
}
void kanan_maju_100 () {
  en_aktif();
  analogWrite(LPWM1, 100);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 100);
  analogWrite(RPWM4, 0);
}
void kanan_maju_175 () {
  en_aktif();
  analogWrite(LPWM1, 175);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 175);
  analogWrite(RPWM4, 0);
}
void kanan_maju_200 () {
  en_aktif();
  analogWrite(LPWM1, 200);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 200);
  analogWrite(RPWM4, 0);
}

//kiri-mundur
void kiri_mundur_50 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 50);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 50);
}
void kiri_mundur_80 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 80);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 80);
}
void kiri_mundur_100 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 100);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 100);
}
void kiri_mundur_175 () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 175);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 175);
}
//belok mundur

void belok_kiri_mundur () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 120);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 120);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 80);
}
void belok_kanan_mundur () {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 80);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 120);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 80);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 120);
}
//belok maju
void belok_kanan_maju () {
  en_aktif();
  analogWrite(LPWM1, 120);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 80);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 120);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 80);
  analogWrite(RPWM4, 0);
}
void belok_kiri_maju () {
  en_aktif();
  analogWrite(LPWM1, 80);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 80); //80
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0); //0
  analogWrite(RPWM2, 140); //140
  analogWrite(LPWM4, 140);
  analogWrite(RPWM4, 0);
}
void belok_kiri_maju2 () {
  en_aktif();
  analogWrite(LPWM1, 50);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 50); //80
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0); //0
  analogWrite(RPWM2, 120); //140
  analogWrite(LPWM4, 120);
  analogWrite(RPWM4, 0);
}
//= == == == == == == == == == == == == == == == == == == == == == == == == == == == == == =
//muter-kanan
void muter_kanan_50() {
  en_aktif();
  analogWrite(LPWM1, 50);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 50);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 50);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 50);
}
void muter_kanan_80() {
  en_aktif();
  analogWrite(LPWM1, 80);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 80);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 80);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 80);
}
void muter_kanan_100() {
  en_aktif();
  analogWrite(LPWM1, 100);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 100);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 100);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 100);
}
void muter_kanan_175() {
  en_aktif();
  analogWrite(LPWM1, 175);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 175);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 175);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 175);
}
//muter-kiri
void muter_kiri_50() {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 50);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 50);
  analogWrite(LPWM2, 50);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 50);
  analogWrite(RPWM4, 0);
}
void muter_kiri_80() {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 80);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM2, 80);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 80);
  analogWrite(RPWM4, 0);
}
void muter_kiri_100() {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 100);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 100);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 100);
  analogWrite(RPWM4, 0);
}
void muter_kiri_175() {
  en_aktif();
  analogWrite(LPWM1, 0);
  analogWrite(RPWM1, 175);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 175);
  analogWrite(LPWM2, 175);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 175);
  analogWrite(RPWM4, 0);
}
void special_ratu_50() {
  en_aktif();
  analogWrite(LPWM1, 50);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 50);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 50);
}

void Muter_jalan() {
  en_aktif();
  analogWrite(LPWM1, 50);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 50);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM4, 50);
}
