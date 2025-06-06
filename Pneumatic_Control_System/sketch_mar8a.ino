#define S1 2
#define S2 3
#define S3 18
#define S4 19
#define S5 16
#define S6 17
#define S7 20
#define CNV1 4
#define CNV2 6
#define CNV3 10
#define Red 26
#define Green 28
#define Orange 30
#define Rodless 5
#define TN1 7
#define Suction 8
#define CY1 9
#define CY2 46
#define Gripper 22
#define TN2 24
#define C1S1 21
#define C1S2 23
#define C2S1 25
#define C2S2 27
int b;

void setup() {
  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
  pinMode(S3, INPUT_PULLUP);
  pinMode(S4, INPUT_PULLUP);
  pinMode(S5, INPUT_PULLUP);
  pinMode(S6, INPUT_PULLUP);
  pinMode(S7, INPUT_PULLUP);
  pinMode(C1S1, INPUT_PULLUP);
  pinMode(C1S2, INPUT_PULLUP);
  pinMode(C2S1, INPUT_PULLUP);
  pinMode(C2S2, INPUT_PULLUP);

  pinMode(CNV1, OUTPUT);
  pinMode(CNV2, OUTPUT);
  pinMode(CNV3, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Orange, OUTPUT);
  pinMode(Rodless, OUTPUT);
  pinMode(TN1, OUTPUT);
  pinMode(Suction, OUTPUT);
  pinMode(CY1, OUTPUT);
  pinMode(CY2, OUTPUT);
  pinMode(Gripper, OUTPUT);
  pinMode(TN2, OUTPUT);
  b = 1;
}

void loop() {
  if (b == 1) {
    digitalWrite(CNV1, LOW);
    digitalWrite(CNV2, LOW);
    digitalWrite(CNV3, LOW);
    digitalWrite(Red, LOW);
    digitalWrite(Green, HIGH);
    digitalWrite(Orange, HIGH);
    digitalWrite(Rodless, HIGH);
    digitalWrite(TN1, HIGH);
    digitalWrite(Suction, HIGH);
    digitalWrite(CY1, HIGH);
    digitalWrite(CY2, HIGH);
    digitalWrite(Gripper, HIGH);
    digitalWrite(TN2, HIGH);
    b = 2;
  }

  if (b == 2) {
    if (digitalRead(S1) == LOW) {
      b = 3;
    }
  }
  if (b == 3) {
    delay(2000);
    digitalWrite(CNV1, HIGH);
    digitalWrite(Red, HIGH);
    digitalWrite(Green, LOW);
    b = 4;
  }
  if (b == 4) {
    if (digitalRead(S2) == HIGH) {
      b = 5;
    }
  }
  if (b == 5) {
    digitalWrite(CNV1, LOW);
    digitalWrite(Orange, LOW);
    delay(5000);
    digitalWrite(Orange, HIGH);
    digitalWrite(CNV1, HIGH);
    b = 6;
  }
  if (b == 6) {
    if (digitalRead(S3) == LOW) {
      b = 7;
    }
  }
  if (b == 7) {
    delay(200);
    digitalWrite(CNV1, LOW);
    delay(2000);
    digitalWrite(Rodless, LOW);
    delay(2000);
    digitalWrite(TN1, LOW);
    delay(2000);
    digitalWrite(Suction, LOW);
    delay(2000);
    digitalWrite(TN1, HIGH);
    delay(2000);
    digitalWrite(Rodless, HIGH);
    delay(2000);
    digitalWrite(TN1, LOW);
    delay(2000);
    digitalWrite(Suction, HIGH);
    delay(2000);
    digitalWrite(TN1, HIGH);
    delay(2000);
    b = 8;
  }
  if (b == 8) {
    if (digitalRead(S4) == LOW) {
      b = 9;
    }
  }
  if (b == 9) {
    digitalWrite(CNV2, HIGH);
    b = 10;
  }
  if (b == 10) {
    if (digitalRead(S5) == LOW) {
      b = 11;
    }
  }
  if (b == 11) {
    delay(300);
    digitalWrite(CNV2, LOW);
    delay(2000);
    b = 12;
  }
  if (b == 12) {
    if ((digitalRead(C1S1) == LOW) && (digitalRead(C2S1) == LOW)) {
      b = 13;
    }
  }
  if (b == 13) {
    digitalWrite(CY2, LOW);
    delay(2000);
    b = 14;
  }
  if (b == 14) {
    if (digitalRead(C2S2) == LOW) {
      b = 15;
    }
  }
  if (b == 15) {
    digitalWrite(Gripper, LOW);
    delay(2000);
    digitalWrite(CY2, HIGH);
    delay(2000);
    b = 16;
  }
  if (b == 16) {
    if (digitalRead(C2S1) == LOW) {
      b = 17;
    }
  }
  if (b == 17) {
    digitalWrite(CY1, LOW);
    delay(2000);
    b = 18;
  }
  if (b == 18) {
    if (digitalRead(C1S2) == LOW) {
      b = 19;
    }
  }
  if (b == 19) {
    digitalWrite(CY2, LOW);
    delay(2000);
    b = 20;
  }
  if (b == 20) {
    if (digitalRead(C2S2) == LOW) {
      b = 21;
    }
  }
  if (b == 21) {
    digitalWrite(Gripper, HIGH);
    delay(2000);
    digitalWrite(CY2, HIGH);
    delay(2000);
    b = 22;
  }
  if (b == 22) {
    if (digitalRead(C2S1) == LOW) {
      b = 23;
    }
  }
  if (b == 23) {
    digitalWrite(Orange, LOW);
    delay(5000);
    digitalWrite(Orange, HIGH);
    digitalWrite(CY2, LOW);
    b = 24;
  }
  if (b == 24) {
    if (digitalRead(C2S2) == LOW) {
      b = 25;
    }
  }
  if (b == 25) {
    digitalWrite(Gripper, LOW);
    delay(2000);
    digitalWrite(CY2, HIGH);
    delay(2000);
    b =26;
  }
  if (b == 26) {
    if (digitalRead(C2S1) == LOW) {
      b = 27;
    }
  }
  if (b == 27) {
    digitalWrite(CY1, HIGH);
    delay(2000);
    b = 28;
  }
  if (b == 28) {
    if (digitalRead(C1S1) == LOW) {
      b = 29;
    }
  }
  if (b == 29) {
    digitalWrite(CY2, LOW);
    delay(2000);
    b = 30;
  }
  if (b == 30) {
    if (digitalRead(C2S2) == LOW) {
      b = 31;
    }
  }
  if (b == 31) {
    digitalWrite(Gripper, HIGH);
    delay(2000);
    digitalWrite(CY2, HIGH);
    delay(2000);
    b = 32;
  }
  if (b == 32) {
    if (digitalRead(C2S1) == LOW) {
      b = 33;
    }
  }

  if (b == 33) {
    digitalWrite(CNV2, HIGH);
    b = 34;
  }
  if (b == 34) {
    if (digitalRead(S6) == LOW) {
      b = 35;
    }
  }
  if (b == 35) {
    delay(200);
    digitalWrite(CNV2, LOW);
    delay(2000);
    digitalWrite(CNV3, HIGH);
    delay(2000);
    digitalWrite(TN2, LOW);
    b = 36;
  }
  if (b == 36) {
    if (digitalRead(S7) == HIGH) {
      b = 1;
    }
  }
}
