void transfer_tz2() {
  if (digitalRead(pin_proxy2) == 0 && digitalRead(pin_proxy1) == 1 && digitalRead(pin_proxy3) == 1) {
    if (digitalRead(pin_proxy1 && pin_proxy3) == 1 && flag == 0) {
      delay(1000);
      Serial1.write('9');//6
      delay(2000);
      posisi = 8;//8
      flag = 1;
    }
  }
  else {
    flag = 0;
  }
}
void transfer_cek2() {
  if (digitalRead(pin_proxy1) == 0 || digitalRead(pin_proxy2) == 0 || digitalRead(pin_proxy3) == 0) {
    posisi = 15;
    delay(1000);
  }
  else {
    flag = 0;
  }
}
void transfer_tz2_reload() {
  if (digitalRead(pin_proxy2) == 0 && digitalRead(pin_proxy1) == 1 && digitalRead(pin_proxy3) == 1) {
    if (digitalRead(pin_proxy2) == 0 && flag == 0) {
      delay(500);
      Serial1.write('9');//6
      delay(1000);
      mode2 = 1;
      mode1 = 0;
      posisi = 80;
      flag = 1;
    }
  }
  else {
    flag = 0;
  }
}
void lempar_tz2() {
  Serial1.write('0');
  delay(300);
  Serial1.write('2');
  delay(1000);
  posisi = 13;//11
}

