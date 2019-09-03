void transfer_tz1() {
  if (digitalRead(pin_proxy1) == 0 && digitalRead(pin_proxy2) == 1 && digitalRead(pin_proxy3) == 1) {
    if (digitalRead(pin_proxy1) == 0 && flag == 0) {
      delay(1000);
      Serial1.write('7');
      delay(800);
      posisi = 4;
      flag = 1;
    }
  }
  //  else if (digitalRead(pin_proxy1) == 0 && digitalRead(pin_proxy2) == 1) {
  //    if (digitalRead(pin_proxy1) == 0 && flag == 0) {
  //      flag = 1;
  //    }
  //  }
  //  else if (digitalRead(pin_proxy1) == 0 && digitalRead(pin_proxy3) == 1) {
  //    if (digitalRead(pin_proxy1) == 0 && flag == 0) {
  //      flag = 1;
  //    }
  //  }
  else {
    flag = 0;
  }
}
void transfer_cek1() {
  if (digitalRead(pin_proxy1) == 0 || digitalRead(pin_proxy2) == 0 || digitalRead(pin_proxy3) == 0) {
    posisi_bola = 1;
    delay(2000);
  }
  else if (digitalRead(pin_proxy1) == 0 && digitalRead(pin_proxy2) == 1 && digitalRead(pin_proxy3) && posisi_bola == 1) {
    if (digitalRead(pin_proxy2) == 1 && digitalRead(pin_proxy3) == 1) {
      delay(1000);
      Serial1.write('7');
      delay(1000);
      posisi = 6;
      flag = 1;
    }
    else {
      flag = 0;
    }
  }
  //  else if (digitalRead(pin_proxy1) == 0 && digitalRead(pin_proxy2) == 1) {
  //    if (digitalRead(pin_proxy1) == 0 && flag == 0) {
  //      flag = 1;
  //    }
  //  }
  //  else if (digitalRead(pin_proxy1) == 0 && digitalRead(pin_proxy3) == 1) {
  //    if (digitalRead(pin_proxy1) == 0 && flag == 0) {
  //      flag = 1;
  //    }
  //  }
  else {
    flag = 0;
  }
}
void transfer_tz1_reload() {
  if (digitalRead(pin_proxy1) == 0 && digitalRead(pin_proxy2) == 1 && digitalRead(pin_proxy3) == 1) {
    if (digitalRead(pin_proxy1) == 0 && flag == 0) {
      delay(1000);
      Serial1.write('7');
      delay(500);
      posisi = 4;//52
      flag = 1;
    }
  }
  else {
    flag = 0;
  }
}
void lempar_tz1() {
  Serial1.write('0');
  delay(300);
  Serial1.write('1');
  delay(1000);
}
