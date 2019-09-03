//------------------------------ Enable ------------------------------------
void en_aktif() {
  digitalWrite(REN1, HIGH);
  digitalWrite(LEN1, HIGH);
  digitalWrite(REN2, HIGH);
  digitalWrite(LEN2, HIGH);
  digitalWrite(REN3, HIGH);
  digitalWrite(LEN3, HIGH);
  digitalWrite(REN4, HIGH);
  digitalWrite(LEN4, HIGH);
}
void en_maju_aktif() {
  digitalWrite(REN1, LOW);
  digitalWrite(LEN1, LOW);
  digitalWrite(REN2, HIGH);
  digitalWrite(LEN2, HIGH);
  digitalWrite(REN3, LOW);
  digitalWrite(LEN3, LOW);
  digitalWrite(REN4, HIGH);
  digitalWrite(LEN4, HIGH);
}
void en_samping_aktif() {
  digitalWrite(REN1, HIGH);
  digitalWrite(LEN1, HIGH);
  digitalWrite(REN2, LOW);
  digitalWrite(LEN2, LOW);
  digitalWrite(REN3, HIGH);
  digitalWrite(LEN3, HIGH);
  digitalWrite(REN4, LOW);
  digitalWrite(LEN4, LOW);
}
void en_nonaktif() {
  digitalWrite(REN1, HIGH);
  digitalWrite(LEN1, HIGH);
  digitalWrite(REN2, LOW);
  digitalWrite(LEN2, LOW);
  digitalWrite(REN3, HIGH);
  digitalWrite(LEN3, HIGH);
  digitalWrite(REN4, LOW);
  digitalWrite(LEN4, LOW);
}
//------------------------------ REM ------------------------------------
void rem() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
}
//------------------------------ MAJU ------------------------------------
void maju() {
  en_maju_aktif();
  analogWrite(RPWM2, kec / bagi);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, kec / bagi);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
}
void maju_step() {
  en_aktif();
  analogWrite(RPWM2, 80);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 80);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM3, 0);
  delay(2000);
}
//------------------------------ MUNDUR ------------------------------------

void mundur_step() {
  en_aktif();
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 70);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 70);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  delay(400);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 130);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 130);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  delay(2000);
}
void mundur_step1() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 50);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 50);
  delay(300);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 100);
  delay(500);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 175);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 175);
  delay(2300);
}
void mundur_step2() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 50);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 50);
  delay(300);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 100);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 100);
  delay(500);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 175);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 175);
  delay(3600);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 40);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 40);
  delay(1000);
}
//------------------------------ KANAN ------------------------------------

void kanan_step() {
  en_aktif();
  analogWrite(RPWM1, 50);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 50);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  delay(300);
  analogWrite(RPWM1, 100);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 100);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  delay(500);
  analogWrite(RPWM1, 175);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 175);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  delay(2300);
}
void kanan_geser() {
  en_aktif();
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
}
void kanan_spesial() {
  en_aktif();
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM3, 0);
  delay(1700);
}
void kanan_spesial2() {
  en_aktif();
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 175);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 175);
  analogWrite(LPWM3, 0);
  delay(1000);
}
void kananzz() {
  en_aktif();
  analogWrite(RPWM1, 100);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 100);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
}
//------------------------------ KIRI ------------------------------------

void kiri_100_a() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 110);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 100);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
}
void kanan_lambat() {
  en_aktif();
  analogWrite(RPWM1, 30);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 30);
  analogWrite(LPWM3, 0);
}
void kiri_lambat() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 30);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 30);
}
void kiri_lambat2() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 40);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 40);
}
void kiri_kai() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 70);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 70);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  delay(200);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 150);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 150);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
}
void kiri_lambat3() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 40);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 60);
}
void kiri_2() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 80);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 80);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
}
//------------------------------ MUTER ------------------------------------
void muter_kiri_a() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 40);
  analogWrite(RPWM3, 40);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 40);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 40);
}
void muter_kiri_b() {
  en_aktif();
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 60);
  analogWrite(RPWM3, 60);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 60);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 60);
}
void muter_kanan() {
  en_aktif();
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 80);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 80);
  analogWrite(RPWM4, 80);
  analogWrite(LPWM4, 0);
}
void muter_kanan_a() {
  en_aktif();
  analogWrite(RPWM1, 40);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 40);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 40);
  analogWrite(RPWM4, 40);
  analogWrite(LPWM4, 0);
}
void muter_kanan_b() {
  en_aktif();
  analogWrite(RPWM1, 60);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 0);
  analogWrite(LPWM3, 60);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 60);
  analogWrite(RPWM4, 60);
  analogWrite(LPWM4, 0);
}
//------------------------------ SPESIAL ------------------------------------
void khusus1() {
  en_aktif();
  analogWrite(RPWM2, 50);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 50);
  analogWrite(LPWM4, 0);
  delay(1700);
  analogWrite(RPWM2, 100);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 20);
  analogWrite(LPWM4, 0);
  delay(2800);
  maju();
  delay(600);
  analogWrite(RPWM2, 100);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 20);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 100);
  delay(1600);
  rem();
  delay(400);
  kanan_175();
  us_depan_a();
  delay(600);
  maju_50();
  us_depan_a();
  delay(100);
}
void khusus2() {
  en_aktif();
  analogWrite(RPWM2, 80);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 80);
  analogWrite(LPWM4, 0);
  delay(1000);
  analogWrite(RPWM1, 0);
  analogWrite(LPWM1, 150);
  analogWrite(RPWM3, 50);
  analogWrite(LPWM3, 0);
  delay(600);
  posisi = 100;
}
void miring1() {
  en_aktif();
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 60);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  delay(1500);
  analogWrite(RPWM2, 80);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 80);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM3, 0);
  delay(600);
}
void miring2() {
  en_aktif();
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  delay(1500);
  analogWrite(RPWM2, 80);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 80);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM3, 0);
  delay(600);
}
void miring3() {
  en_aktif();
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 60);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  delay(1500);
  analogWrite(RPWM2, 80);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 80);
  analogWrite(LPWM4, 0);
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM3, 0);
  delay(600);
}
void spesial_tz1() {
  en_aktif();
  analogWrite(RPWM1, 80);
  analogWrite(LPWM1, 0);
  analogWrite(RPWM3, 80);
  analogWrite(LPWM3, 0);
  analogWrite(RPWM2, 0);
  analogWrite(LPWM2, 0);
  analogWrite(RPWM4, 0);
  analogWrite(LPWM4, 0);
  delay(1500);
}
