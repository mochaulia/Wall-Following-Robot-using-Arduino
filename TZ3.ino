void transfer_tz3() {
  if (digitalRead(pin_proxy3) == 0 && flag == 0) {
    delay(1000);
    Serial1.write('8');
    delay(800);
    mode2 = 0;
    mode1 = 1;
    posisi = 15;
    flag = 1;
  }
  else {
    flag = 0;
  }
}
void transfer_cek3() {
  if (digitalRead(pin_proxy1) == 0 || digitalRead(pin_proxy2) == 0 || digitalRead(pin_proxy3) == 0) {
    posisi = 27;
    delay(1000);
  }
  else {
    flag = 0;
  }
}
void transfer_cek3_spesial() {
  if (digitalRead(pin_proxy1) == 0 || digitalRead(pin_proxy2) == 0 || digitalRead(pin_proxy3) == 0) {
    delay(2000);
    mode1 = 1;
    mode2 = 0;
    mode3 = 0;
    posisi = 27;
    flag = 1;
  }
  else {
    flag = 0;
  }
}
void lempar_tz3() {
  Serial1.write('0');
  delay(300);
  Serial1.write('3');
  delay(1000);
}

