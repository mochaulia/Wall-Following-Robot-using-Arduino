void cek() {
  Serial.print("Ping 1 : ");
  Serial.print(cm1);
  Serial.println(" cm");
  Serial.print("Ping 2 : ");
  Serial.print(cm2);
  Serial.println(" cm");
  Serial.print("Ping 3 : ");
  Serial.print(cm3);
  Serial.println(" cm");
  Serial.print("Ping 4 : ");
  Serial.print(cm4);
  Serial.println(" cm");
  Serial.print("Ping 5 : ");
  Serial.print(cm5);
  Serial.println(" cm");
  Serial.print("Ping 6 : ");
  Serial.print(cm6);
  Serial.println(" cm");
  Serial.println("==================================");
  delay(100);
}
void us_depan_a() {
  cm1 = sonar1.ping_cm();
  cm2 = sonar2.ping_cm();
  delay(30);
   if (a != 0) {
     cm1 = a;
   }
   if (b != 0) {
     cm2 = b;
   }
}
void us_depan_b() {
  a = sonar1.ping_cm();
  b = sonar2.ping_cm();
  delay(30);
  if (a != 0) {
    cm1 = a;
  }
  if (b != 0) {
    cm2 = b;
  }
}
void us_kiri_a() {
  cm3 = sonar3.ping_cm();
  d = sonar4.ping_cm();
  delay(30);
    if (c != 0) {
      cm3 = c;
    }
  if (d != 0) {
    cm4 = d;
  }
}
void us_kiri_b() {
  c = sonar3.ping_cm();
  d = sonar4.ping_cm();
  delay(30);
  if (c != 0) {
    cm3 = c;
  }
  if (d != 0) {
    cm4 = d;
  }
}
void us_belakang_a() {
  e = sonar5.ping_cm();
  cm6 = sonar6.ping_cm();
  delay(30);
  if (e != 0) {
    cm5 = e;
  }
  //  if (f != 0) {
  //    cm6 = f;
  //  }
}
void us_belakang_b() {
  e = sonar5.ping_cm();
  f = sonar6.ping_cm();
  delay(30);
  if (e != 0) {
    cm5 = e;
  }
  if (f != 0) {
    cm6 = f;
  }
}
//===============================================================
