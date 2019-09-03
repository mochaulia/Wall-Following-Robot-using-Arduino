#include <NewPing.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <EEPROM.h>

//SERIAL
char data;

//LCD

#define I2C_ADDR 0x27  // 0x27 atau 0x3F
#define BACKLIGHT_PIN 3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7
LiquidCrystal_I2C lcd(I2C_ADDR, En_pin, Rw_pin, Rs_pin, D4_pin, D5_pin, D6_pin, D7_pin);

//Proxy
#define pin_proxy1 48
#define pin_proxy2 52
#define pin_proxy3 50
int flag = 0;

//Tombol
int ok, cancel, up, down;

//pelontar
#define sol1 40
#define sol2 36
#define sol3 34
#define sol4 38
#define sol5 30
#define led_lempar 32

//Motor
#define RPWM1 10
#define LPWM1 11
#define RPWM2 9
#define LPWM2 8
#define RPWM3 5
#define LPWM3 4
#define RPWM4 6
#define LPWM4 7
#define REN1 23
#define LEN1 25
#define REN2 27
#define LEN2 29
#define REN3 31
#define LEN3 33
#define REN4 35
#define LEN4 37
int kec = 200, bagi = 2;

//Sensor Garis
int sen[6], sen_min[6], sen_max[6], sen_avr[6], xx[6], y[6], z[6];
#define en_sen1 39
#define en_sen2 41

//Ultrasonic
#define TRIGGER_PIN2 22   //LF 2-3
#define ECHO_PIN2 24
#define TRIGGER_PIN1 26   //RF 2-3
#define ECHO_PIN1 28
#define TRIGGER_PIN5 43   //BL 6-7
#define ECHO_PIN5 42
#define TRIGGER_PIN6 45   //FL 6-7
#define ECHO_PIN6 44
#define TRIGGER_PIN4 47   //LB 6-7
#define ECHO_PIN4 46
#define TRIGGER_PIN3 51   //RB 5-6
#define ECHO_PIN3 49
#define MAX_DISTANCE 500 //max 400-500

NewPing sonar1(TRIGGER_PIN1, ECHO_PIN1, MAX_DISTANCE);
NewPing sonar2(TRIGGER_PIN2, ECHO_PIN2, MAX_DISTANCE);
NewPing sonar3(TRIGGER_PIN3, ECHO_PIN3, MAX_DISTANCE);
NewPing sonar4(TRIGGER_PIN4, ECHO_PIN4, MAX_DISTANCE);
NewPing sonar5(TRIGGER_PIN5, ECHO_PIN5, MAX_DISTANCE);
NewPing sonar6(TRIGGER_PIN6, ECHO_PIN6, MAX_DISTANCE);
int cm1, cm2, cm3, cm4, cm5, cm6, a, b, c, d, e, f;

//Posisi Robot
int posisi = 1 , posisi_bola = 0, x = 0;

//Mode
int scan1, mode1, mode2, mode3;

//General Variable
int aul, ratu, i, j, k;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);

  //LCD
  lcd.setBacklightPin(BACKLIGHT_PIN, POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.begin(20, 4);
  lcd.clear();

  //proxy
  pinMode(pin_proxy1, INPUT_PULLUP);
  pinMode(pin_proxy2, INPUT_PULLUP);
  pinMode(pin_proxy3, INPUT_PULLUP);

  //Tombol
  pinMode(A12, INPUT_PULLUP);
  pinMode(A13, INPUT_PULLUP);
  pinMode(A14, INPUT_PULLUP);
  pinMode(A15, INPUT_PULLUP);

  //Solenoid
  pinMode(sol1, OUTPUT);
  pinMode(sol2, OUTPUT);
  pinMode(sol3, OUTPUT);
  pinMode(sol4, OUTPUT);
  pinMode(sol5, OUTPUT);
  pinMode(led_lempar, OUTPUT);
  digitalWrite(sol1, HIGH);
  digitalWrite(sol2, HIGH);
  digitalWrite(sol3, HIGH);
  digitalWrite(sol4, HIGH);
  digitalWrite(sol5, HIGH);
  digitalWrite(led_lempar, HIGH);

  //Sensor
  pinMode(en_sen1, OUTPUT);
  pinMode(en_sen2, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);

  for (i = 0; i <= 5; i++) {
    sen_min[i] = 1023;
  }
  for (i = 0; i <= 5; i++) {
    sen_max[i] = 0;
  }

  //Motor
  for (i = 4; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(REN1, OUTPUT);
  pinMode(LEN1, OUTPUT);
  pinMode(REN2, OUTPUT);
  pinMode(LEN2, OUTPUT);
  pinMode(REN3, OUTPUT);
  pinMode(LEN3, OUTPUT);
  pinMode(REN4, OUTPUT);
  pinMode(LEN4, OUTPUT);

  for (i = 4; i < 14; i++) {
    digitalWrite(i, LOW);
  }
  digitalWrite(REN1, LOW);
  digitalWrite(LEN1, LOW);
  digitalWrite(REN2, LOW);
  digitalWrite(LEN2, LOW);
  digitalWrite(REN3, LOW);
  digitalWrite(LEN3, LOW);
  digitalWrite(REN4, LOW);
  digitalWrite(LEN4, LOW);

  mati();

  read_sensor();
  //  sen_avr[0] = 650;
  //  sen_avr[1] = 650;
  //  sen_avr[2] = 630;
  //  sen_avr[3] = 630;
  //  sen_avr[4] = 650;
  //  sen_avr[5] = 650;
}

void loop() {
  tombol();
  if (ok == 0) {
    scan1 = 1;
    mode1 = 0;
    mode2 = 0;
    mode3 = 0;
  }
  else if (cancel == 0) {
    scan1 = 0;
    mode1 = 1;
    mode2 = 0;
    mode3 = 0;
  }
  else if (up == 0) {
    scan1 = 0;
    mode1 = 0;
    mode2 = 1;
    mode3 = 0;
  }
  else if (down == 0) {
    scan1 = 0;
    mode1 = 0;
    mode2 = 0;
    mode3 = 1;
  }
  if (scan1 == 1 ) {
    baca_sensor1();
    sen_average();
    write_sensor();
  }
  //============================================ MODE 1 ==================================================
  else if (mode1 == 1) {
    if (posisi == 1) {
      baca_sensor1();
      kanan_for_pos1();
      kanan_175();
      delay(1300);
      brake_pos1();
      rem();
      delay(600);
      us_depan_a();
      posisi = 2;
    }
    else if (posisi == 2) {
      maju_pos2();
      maju_125();
      delay(1100);
      brake_pos2();
      rem();
      posisi = 3;//3
    }
    else if (posisi == 3) {
      transfer_tz1();//================================================TRANSFER_TZ1============================
    }
    //============================================================================================================================================
    else if (posisi == 4) {
      muter_kiri_80();
      Serial1.write('A');
      //delay(705); // Posisi Start roller belakang nempel
      delay(660); // Posisi Start roller depan nempel 700
      rem();
      posisi = 5;//5
    }
    else if (posisi == 5) {
      lempar_tz1();//================================================LEMPAR_TZ1=========================================
      us_depan_a();
      baca_sensor1();
      muter_kanan_80();
      //delay(705); // Posisi Start roller belakang nempel
      delay(660); // Posisi Start roller depan nempel
      Serial1.write('B');
      rem();
      delay(100);
      posisi = 7;
    }
    else if (posisi == 6) {
      // mundur_80();
      // delay(500);
      rem();
      posisi = 7;
    }
    else if (posisi == 7) {
      transfer_tz1_reload();
      us_depan_a();
      baca_sensor1();
      transfer_tz2();//================================================TRANSFER_TZ2============================

    }
    else if (posisi == 8) {
      mundur_175();
      delay(600);
      kanan_mundur_175();
      delay(300);
      kanan_175();
      delay(400);
      kanan_maju_175();
      delay(400);
      muter_kiri_175();
      delay(430);
      rem();
      delay(200);//tadinya 400
      kanan_175();
      delay(100);
      kanan_maju_80();//tadinya 175
      delay(300);
      baca_sensor1();
      delay(550); //tadinya 650
      kanan_maju_80();
      delay(200);
      baca_sensor1();
      delay(200); //tadinya 300
      kanan_maju_50();
      baca_sensor1();
      delay (200);
      kanan_100();
      delay(100);
      baca_sensor1();
      posisi = 10;
    }
    else if (posisi == 10) {
      us_depan_a();
      gerak_kanan_maju2();
      baca_sensor1();
      deteksi_sensor1();
    }
    else if (posisi == 11) {
      baca_sensor1();
      deteksi_sensor2();
    }
    else if (posisi == 12) {
      lempar_tz2();//================================================LEMPAR_TZ2====================================
    }
    else if (posisi == 13) {
      kiri_100();
      delay(650);
      muter_kanan_80();
      delay(980); //tadinya 900
      Serial1.write('B');
      mundur_100();
      delay(100);
      kiri_50();
      delay(300);
      mundur_80();
      delay(200);
      rem();
      posisi = 14;
    }
    else if (posisi == 14) {
      transfer_tz3();//================================================TRANSFER_TZ3============================
      transfer_tz2_reload();
      //      rem();
      //      delay(400);
      //      posisi = 15;

    }
    else if (posisi == 15) {
      muter_kiri_80();
      us_depan_a();
      delay(900);
      kanan_maju_80();
      delay(600);
      rem();
      delay(200);
      posisi = 16;
    }
    else if (posisi == 16) {
      us_depan_a();
      kanan_175a();
      delay(1100);
      kanan_100();
      delay(100);
      //rem();
      posisi = 17;
    }
    else if (posisi == 17) {
      us_depan_a();
      gerak_kanan_maju();
      baca_sensor1();
      deteksi_sensor3();//henti z3
    }
    else if (posisi == 18) {
      us_depan_a();
      baca_sensor1();
      deteksi_sensor4();//HENTI
    }
    else if (posisi == 19) {
      lempar_tz3();//================================================LEMPAR_TZ3============================
      baca_sensor1();
      us_depan_a();
      posisi = 50;
    }

    //============================================= END ==========================================
    //============================================= END ==========================================
    //============================================= END ==========================================
    //============================================= END ==========================================
    //============================================= END ==========================================
    //============================================= END ==========================================
    //============================================= END ==========================================
    //============================================= END ==========================================
    //============================================= END ==========================================
    //============================================= END ==========================================
    //============================================= END ==========================================
    else if (posisi == 21) {
      baca_sensor1();
      deteksi_sensor9();
    }
    else if (posisi == 22) {
      lempar_tz2();//================================================ LEMPAR_TZ2 ====================================
    }
    else if (posisi == 23) {
      kiri_150();
      us_depan_a();
      ref_depan4();
    }
    else if (posisi == 24) {
      kiri_150();
      delay(500);//================================================KELUAR DARI TZ2====================================
      mati();// ================================================ Solenoid Mati =========================================
      rem();
      delay(400);
      posisi = 62;
    }
    //    else if (posisi == 25) {
    //      us_belakang_a();
    //      gerak_kanan_mundur();
    //      ref_belakang2();
    //    }
    //    else if (posisi == 26) {
    //      kanan();
    //      delay(1600);
    //      rem();
    //      delay(200);
    //      posisi = 62;
    //    }
    else if (posisi == 27) {
      transfer_tz3();//================================================TRANSFER_TZ3============================
      transfer_tz2_reload();
    }
    else if (posisi == 28) {
      kanan_spesial2();
      rem();
      us_depan_a();
      posisi = 29;
    }
    else if (posisi == 29) {
      us_depan_a();
      baca_sensor1();
      deteksi_depan4();
    }
    else if (posisi == 30) {
      us_depan_a();
      gerak_kanan_maju();
      baca_sensor1();
      deteksi_sensor3();//kanan
    }
    else if (posisi == 31) {
      us_depan_a();
      gerak_kanan_maju();
      baca_sensor1();
      deteksi_sensor5();//HENTI
    }
    else if (posisi == 32) {
      lempar_tz3();//================================================LEMPAR_TZ3============================
      posisi = 33;
      us_depan_a();
    }
    else if (posisi == 33) {
      kiri_150();
      delay(250);//================================================KELUAR ZONA TZ3============================
      mati();// ================================================ Solenoid Mati =========================================
      posisi = 34;
    }
    else if (posisi == 34) {
      us_depan_a();
      gerak_kiri_maju();
      baca_sensor1();
      deteksi_sensor6();
    }



    //=======================================REM===========================================
    else if (posisi == 100) {
      rem();
    }
    //=====================================TZ2 RELOAD=====================================
    else if (posisi == 50) {
      baca_sensor1();
      kiri_80();
      delay(300);
      us_depan_a();
      posisi = 51;
    }
    else if (posisi == 51) {
      baca_sensor1();
      us_depan_a();
      deteksi_sensor5();
    }
    //======================================TZ1 RELOAD====================================
    else if (posisi == 52) {
      kiri_100();
      delay(450);
      muter_kanan_80();
      delay(980); //tadinya 900
      Serial1.write('B');
      mundur_100();
      delay(100);
      kiri_50();
      delay(300);
      mundur_80();
      delay(200);
      rem();
      posisi = 14;
    }
    else if (posisi == 53) {
      us_depan_a();
      deteksi_depan7();
    }
    else if (posisi == 54) {
      us_depan_a();
      gerak_kanan_maju2();
      baca_sensor1();
      deteksi_sensor1();
    }
    //==============================TRANSFER====================================
    else if (posisi == 60) {
      transfer_cek1();
    }
    else if (posisi == 61) {
      transfer_cek2();
    }
    else if (posisi == 62) {
      transfer_cek3();
    }
    //==============================KHUSUS1====================================
    else if (posisi == 70) {
      khusus1();
      posisi = 20;
    }
    //==============================LURUSIN_3====================================
    else if (posisi == 80) {
      baca_sensor1();
      deteksi_sensor10();
    }
  }

  //==============================GERAK LANGSUNG ZONA 2====================================
  else if (mode2 == 1) {
    if (posisi == 1) {
      baca_sensor1();
      kanan_30();
      delay(100);
      kanan_50();
      delay(200);
      kanan_80();
      delay(100);
      kanan_100();
      delay(100);
      kanan_200();
      delay(1800);
      rem_for();
      mundur_80();
      delay(50);
      rem();
      delay(500);
      us_depan_a();
      posisi = 2;
    }
    else if (posisi == 2) {
      maju_125();
      delay(800);
      maju_100();
      delay(120);
      maju_50();
      delay(100);
      kiri_80();
      delay(400);
      muter_kanan_50();
      delay(60);
      rem();
      us_depan_a();
      baca_sensor1();
      posisi = 3;//3
    }
    else if (posisi == 3) {
      transfer_tz2_reload();
      transfer_tz3();
      us_depan_a();
      baca_sensor1();
    }
    //=========================================================================
    else if (posisi == 80) {
      muter_kiri_80();
      delay(900);
      kanan_80();
      delay(300);
      //      rem();
      //      delay(400);
      mode2 = 0;
      mode1 = 1;
      posisi = 10;//10
    }
  }
}
