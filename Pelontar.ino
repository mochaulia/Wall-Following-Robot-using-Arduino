void sol_tz1() {
  digitalWrite(sol1, LOW);
  digitalWrite(sol2, HIGH);
  digitalWrite(sol3, HIGH);
  digitalWrite(sol4, HIGH);
  digitalWrite(sol5, HIGH);
}
void sol_tz2() {
  digitalWrite(sol1, HIGH);
  digitalWrite(sol2, LOW);
  digitalWrite(sol3, HIGH);
  digitalWrite(sol4, HIGH);
  digitalWrite(sol5, HIGH);
}
void sol_tz3() {
  digitalWrite(sol1, HIGH);
  digitalWrite(sol2, HIGH);
  digitalWrite(sol3, LOW);
  digitalWrite(sol4, HIGH);
  digitalWrite(sol5, HIGH);
}
void turun() {
  digitalWrite(sol1, HIGH);
  digitalWrite(sol2, HIGH);
  digitalWrite(sol3, HIGH);
  digitalWrite(sol4, LOW);
  digitalWrite(sol5, HIGH);
}
void capit() {
  digitalWrite(sol1, HIGH);
  digitalWrite(sol2, HIGH);
  digitalWrite(sol3, HIGH);
  digitalWrite(sol4, HIGH);
  digitalWrite(sol5, LOW);
}
void mati() {
  digitalWrite(sol1, HIGH);
  digitalWrite(sol2, HIGH);
  digitalWrite(sol3, HIGH);
  digitalWrite(sol4, HIGH);
  digitalWrite(sol5, HIGH);
}
void led_nyala() {
  digitalWrite(led_lempar, LOW);
}
void led_mati() {
  digitalWrite(led_lempar, HIGH);
}

