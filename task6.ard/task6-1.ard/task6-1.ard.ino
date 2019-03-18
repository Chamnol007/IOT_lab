int inputA = 4;
int inputB = 5;
int inputC = 6;
int inputD = 7;
int inputE = 8;
int inputF = 9;
int inputG = 10;
int count = 0;
int buttonPin = 2;
int off = LOW;
int on = HIGH;
int isRunning = 0;
int buttonState;

unsigned long timePress = 0;
unsigned long timePressLimit = 0;
int clicks = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Start");
  pinMode(inputA, OUTPUT);
  pinMode(inputB, OUTPUT);
  pinMode(inputC, OUTPUT);
  pinMode(inputD, OUTPUT);
  pinMode(inputE, OUTPUT);
  pinMode(inputF, OUTPUT);
  pinMode(inputG, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (isRunning == 0 ) {
    digitalWrite(inputA, HIGH);
    digitalWrite(inputB, HIGH);
    digitalWrite(inputC, HIGH);
    digitalWrite(inputD, HIGH);
    digitalWrite(inputE, HIGH);
    digitalWrite(inputF, HIGH);
    digitalWrite(inputG, LOW);
  }

  if (buttonState == HIGH) {
    delay(200);
    Serial.println("Button Pressed");
    if (isRunning == 0) {
      count = 0;
      //      timePress = millis();
      //      timePressLimit = timePress + 1000;
      isRunning = 1;
    } else {
      Serial.println("Hello");
      isRunning = 0;
    }
  }

  if (isRunning == 1) {
    ledLoop();
  }
  delay(200);
}
void ledLoop() {
  while (detectClick()) {
    if (count == 0) {
      Serial.println("0 0 0 0");
      digitalWrite(inputA, HIGH);
      digitalWrite(inputB, HIGH);
      digitalWrite(inputC, HIGH);
      digitalWrite(inputD, HIGH);
      digitalWrite(inputE, HIGH);
      digitalWrite(inputF, HIGH);
      digitalWrite(inputG, LOW);
    } else if (count == 1) {
      Serial.println("0 0 0 1");
      digitalWrite(inputA, LOW);
      digitalWrite(inputB, HIGH);
      digitalWrite(inputC, HIGH);
      digitalWrite(inputD, LOW);
      digitalWrite(inputE, LOW);
      digitalWrite(inputF, LOW);
      digitalWrite(inputG, LOW);
    } else if (count == 2) {
      Serial.println("0 0 1 0");
      digitalWrite(inputA, HIGH);
      digitalWrite(inputB, HIGH);
      digitalWrite(inputC, LOW);
      digitalWrite(inputD, HIGH);
      digitalWrite(inputE, HIGH);
      digitalWrite(inputF, LOW);
      digitalWrite(inputG, HIGH);
    } else if (count == 3) {
      Serial.println("0 0 1 1");
      digitalWrite(inputA, HIGH);
      digitalWrite(inputB, HIGH);
      digitalWrite(inputC, HIGH);
      digitalWrite(inputD, HIGH);
      digitalWrite(inputE, LOW);
      digitalWrite(inputF, LOW);
      digitalWrite(inputG, HIGH);
    } else if (count == 4) {
      Serial.println("0 1 0 0");
      digitalWrite(inputA, LOW);
      digitalWrite(inputB, HIGH);
      digitalWrite(inputC, HIGH);
      digitalWrite(inputD, LOW);
      digitalWrite(inputE, LOW);
      digitalWrite(inputF, HIGH);
      digitalWrite(inputG, HIGH);
    } else if (count == 5) {
      Serial.println("0 1 0 1");
      digitalWrite(inputA, HIGH);
      digitalWrite(inputB, LOW);
      digitalWrite(inputC, HIGH);
      digitalWrite(inputD, HIGH);
      digitalWrite(inputE, LOW);
      digitalWrite(inputF, HIGH);
      digitalWrite(inputG, HIGH);
    } else if (count == 6) {
      Serial.println("0 1 1 0");
      digitalWrite(inputA, HIGH);
      digitalWrite(inputB, LOW);
      digitalWrite(inputC, HIGH);
      digitalWrite(inputD, HIGH);
      digitalWrite(inputE, HIGH);
      digitalWrite(inputF, HIGH);
      digitalWrite(inputG, HIGH);
    } else if (count == 7) {
      Serial.println("0 1 1 1");
      digitalWrite(inputA, HIGH);
      digitalWrite(inputB, HIGH);
      digitalWrite(inputC, HIGH);
      digitalWrite(inputD, LOW);
      digitalWrite(inputE, LOW);
      digitalWrite(inputF, LOW);
      digitalWrite(inputG, LOW);
    } else if (count == 8) {
      Serial.println("1 0 0 0");
      digitalWrite(inputA, HIGH);
      digitalWrite(inputB, HIGH);
      digitalWrite(inputC, HIGH);
      digitalWrite(inputD, HIGH);
      digitalWrite(inputE, HIGH);
      digitalWrite(inputF, HIGH);
      digitalWrite(inputG, HIGH);
    }  else if (count == 9) {
      Serial.println("1 0 0 1");
      digitalWrite(inputA, HIGH);
      digitalWrite(inputB, HIGH);
      digitalWrite(inputC, HIGH);
      digitalWrite(inputD, HIGH);
      digitalWrite(inputE, LOW);
      digitalWrite(inputF, HIGH);
      digitalWrite(inputG, HIGH);
    }
    count++;
    if (count > 9 ) {
      count = 0;
    }

    delay(100);
  }
}

bool detectClick() {
  for (int i = 0; i < 10000; i++) {
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      //      Serial.println(timePress);
      //      Serial.println(timeLimit);
      Serial.println(clicks);
      Serial.println("Button Pressed Inside");
      if (clicks == 0) {
        timePress = millis();
        timePressLimit = timePress + 1000;
        clicks = 1;
      } else if (clicks == 1 && millis() < timePressLimit) {
        Serial.println("Button Pressed twice");
        Serial.println("Reset !");
        timePress = 0;
        timePressLimit = 0;
        clicks = 0;
        isRunning = 0;
        return false;
      }
      delay(200);
    }
    if (millis() > timePressLimit) {
      clicks = 0;
    }

  }
  return true;

}
