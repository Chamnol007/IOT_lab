int ledPin = 13;
int buttonPin = 12;

int buttonState = LOW;

int input2 = 2;
int input3 = 3;
int input4 = 4;
int input5 = 5;
int input6 = 6;
int input7 = 7;
int input8 = 8;

int inPutPinA;
int inPutPinB;
int inPutPinC;
int inPutPinD;
int inPutPinE;
int inPutPinF;
int inPutPinG;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

  Serial.println(buttonState);

  if(buttonState == HIGH) {
    test();
  } else{
    showZero();
  }
  buttonState = digitalRead(buttonPin);
}

void showZero() {
  inPutPinA = HIGH;
  inPutPinB = HIGH;
  inPutPinC = HIGH;
  inPutPinD = HIGH;
  inPutPinE = HIGH;
  inPutPinF = HIGH;
  inPutPinG = LOW;
  digitalWrite(input2, inPutPinA);
  digitalWrite(input3, inPutPinB);
  digitalWrite(input4, inPutPinC);
  digitalWrite(input5, inPutPinD);
  digitalWrite(input6, inPutPinE);
  digitalWrite(input7, inPutPinF);
  digitalWrite(input8, inPutPinG);
  delay(1000);
}

void test() {
  Serial.println("Begin");
  
  inPutPinA = LOW;
  inPutPinB = HIGH;
  inPutPinC = HIGH;
  inPutPinD = LOW;
  inPutPinE = LOW;
  inPutPinF = LOW;
  inPutPinG = LOW;
  digitalWrite(input2, inPutPinA);
  digitalWrite(input3, inPutPinB);
  digitalWrite(input4, inPutPinC);
  digitalWrite(input5, inPutPinD);
  digitalWrite(input6, inPutPinE);
  digitalWrite(input7, inPutPinF);
  digitalWrite(input8, inPutPinG);
  delay(1000);
   
  inPutPinA = HIGH;
  inPutPinB = HIGH;
  inPutPinC = LOW;
  inPutPinD = HIGH;
  inPutPinE = HIGH;
  inPutPinF = LOW;
  inPutPinG = HIGH;
  digitalWrite(input2, inPutPinA);
  digitalWrite(input3, inPutPinB);
  digitalWrite(input4, inPutPinC);
  digitalWrite(input5, inPutPinD);
  digitalWrite(input6, inPutPinE);
  digitalWrite(input7, inPutPinF);
  digitalWrite(input8, inPutPinG);
  delay(1000);
  
  inPutPinA = HIGH;
  inPutPinB = HIGH;
  inPutPinC = HIGH;
  inPutPinD = HIGH;
  inPutPinE = LOW;
  inPutPinF = LOW;
  inPutPinG = HIGH;
  digitalWrite(input2, inPutPinA);
  digitalWrite(input3, inPutPinB);
  digitalWrite(input4, inPutPinC);
  digitalWrite(input5, inPutPinD);
  digitalWrite(input6, inPutPinE);
  digitalWrite(input7, inPutPinF);
  digitalWrite(input8, inPutPinG);
  delay(1000);
  
  inPutPinA = LOW;
  inPutPinB = HIGH;
  inPutPinC = HIGH;
  inPutPinD = LOW;
  inPutPinE = LOW;
  inPutPinF = HIGH;
  inPutPinG = HIGH;
  digitalWrite(input2, inPutPinA);
  digitalWrite(input3, inPutPinB);
  digitalWrite(input4, inPutPinC);
  digitalWrite(input5, inPutPinD);
  digitalWrite(input6, inPutPinE);
  digitalWrite(input7, inPutPinF);
  digitalWrite(input8, inPutPinG);
  delay(1000);
  
  inPutPinA = HIGH;
  inPutPinB = LOW;
  inPutPinC = HIGH;
  inPutPinD = HIGH;
  inPutPinE = LOW;
  inPutPinF = HIGH;
  inPutPinG = HIGH;
  digitalWrite(input2, inPutPinA);
  digitalWrite(input3, inPutPinB);
  digitalWrite(input4, inPutPinC);
  digitalWrite(input5, inPutPinD);
  digitalWrite(input6, inPutPinE);
  digitalWrite(input7, inPutPinF);
  digitalWrite(input8, inPutPinG);
  delay(1000);
  
  inPutPinA = HIGH;
  inPutPinB = LOW;
  inPutPinC = HIGH;
  inPutPinD = HIGH;
  inPutPinE = HIGH;
  inPutPinF = HIGH;
  inPutPinG = HIGH;
  digitalWrite(input2, inPutPinA);
  digitalWrite(input3, inPutPinB);
  digitalWrite(input4, inPutPinC);
  digitalWrite(input5, inPutPinD);
  digitalWrite(input6, inPutPinE);
  digitalWrite(input7, inPutPinF);
  digitalWrite(input8, inPutPinG);
  delay(1000);

   inPutPinA = HIGH;
  inPutPinB = HIGH;
  inPutPinC = HIGH;
  inPutPinD = LOW;
  inPutPinE = LOW;
  inPutPinF = LOW;
  inPutPinG = LOW;
  digitalWrite(input2, inPutPinA);
  digitalWrite(input3, inPutPinB);
  digitalWrite(input4, inPutPinC);
  digitalWrite(input5, inPutPinD);
  digitalWrite(input6, inPutPinE);
  digitalWrite(input7, inPutPinF);
  digitalWrite(input8, inPutPinG);
  delay(1000);
  
  inPutPinA = HIGH;
  inPutPinB = HIGH;
  inPutPinC = HIGH;
  inPutPinD = HIGH;
  inPutPinE = HIGH;
  inPutPinF = HIGH;
  inPutPinG = HIGH;
  digitalWrite(input2, inPutPinA);
  digitalWrite(input3, inPutPinB);
  digitalWrite(input4, inPutPinC);
  digitalWrite(input5, inPutPinD);
  digitalWrite(input6, inPutPinE);
  digitalWrite(input7, inPutPinF);
  digitalWrite(input8, inPutPinG);
  delay(1000);

  inPutPinA = HIGH;
  inPutPinB = HIGH;
  inPutPinC = HIGH;
  inPutPinD = HIGH;
  inPutPinE = LOW;
  inPutPinF = HIGH;
  inPutPinG = HIGH;
  digitalWrite(input2, inPutPinA);
  digitalWrite(input3, inPutPinB);
  digitalWrite(input4, inPutPinC);
  digitalWrite(input5, inPutPinD);
  digitalWrite(input6, inPutPinE);
  digitalWrite(input7, inPutPinF);
  digitalWrite(input8, inPutPinG);
  delay(1000);
}
