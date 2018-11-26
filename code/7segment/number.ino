int delaytime = 50;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);  
}

void loop() {
  intro();
  one();
  two();
  three();
  four();
  five();
  six();
  seven();
  eight();
  nine();
  zero();
  point();
}

void intro() {
   for(int i = 13; i > 5; i--) {
    digitalWrite(i, HIGH);
    delay(delaytime);                    
    digitalWrite(i, LOW);
    delay(delaytime);    
   }
}

void one() {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}

void two() {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}

void three() {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}

void four() {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}

void five() {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}

void six() {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}

void seven() {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}

void eight() {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}

void nine() {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}

void zero() {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}

void point() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(delaytime);
  for(int i = 13; i > 5; i--) {
    digitalWrite(i, LOW);
  }
  delay(delaytime);
}
