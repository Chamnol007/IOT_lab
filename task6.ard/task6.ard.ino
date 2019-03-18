int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int buttonPin = 1; 
//initialising led
int off = LOW;
int on = HIGH;
int isPlayed = 0;
int buttonState;

unsigned long timePress = 0;
unsigned long timePressLimit = 0;
int clicks = 0;

void setup() {
 Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  
  buttonState = digitalRead(buttonPin);
  if(isPlayed == 0 ){
         digitalWrite(a, on);
  digitalWrite(b, on);
  digitalWrite(c, on);
  digitalWrite(d, on);
  digitalWrite(e, on);
  digitalWrite(f, on);
  digitalWrite(g, off);
    }
  
  if (buttonState == HIGH){
    delay(200);
    Serial.println("Button Pressed");
    
    if (clicks == 0) {
    timePress = millis();
    timePressLimit = timePress + 1000;    
    clicks = 1;
    }

    else if (clicks == 1 && millis() < timePressLimit){
      Serial.println("Button Pressed twice");
      Serial.println("Reset !");
      digitalWrite(a, on);
      digitalWrite(b, on);
      digitalWrite(c, on);
      digitalWrite(d, on);
      digitalWrite(e, on);
      digitalWrite(f, on);
      digitalWrite(g, off);    
      timePress = 0;
      timePressLimit = 0;
      clicks = 0;     
       isPlayed = 0; 
    }    
  }

  if (clicks == 1 && timePressLimit != 0 && millis() > timePressLimit){
     Serial.println("Button Pressed Once");
   ledRun();   
        timePress = 0;
     timePressLimit = 0;
       clicks = 0;    
        isPlayed = 1;
  }
}
void ledRun(){
  for(int count = 0;count < 10 ; count++){
 
    if(count==0){
    Serial.println("0");
    digitalWrite(a, on);
    digitalWrite(b, on);
    digitalWrite(c, on);
    digitalWrite(d, on);
  digitalWrite(e, on);
  digitalWrite(f, on);
  digitalWrite(g, off);
 
  }
   if(count==1){
    Serial.println("1");
    digitalWrite(a, off);
    digitalWrite(b, on);
    digitalWrite(c, on);
    digitalWrite(d, off);
    digitalWrite(e, off);
     digitalWrite(f, off);
     digitalWrite(g, off);

  }
     if(count==2){
    Serial.println("2");
    digitalWrite(a, on);
    digitalWrite(b, on);
    digitalWrite(c, off);
    digitalWrite(d, on);
    digitalWrite(e, on);
     digitalWrite(f, off);
     digitalWrite(g, on);

  }
       if(count==3){
    Serial.println("3");
    digitalWrite(a, on);
    digitalWrite(b, on);
    digitalWrite(c, on);
    digitalWrite(d, on);
    digitalWrite(e, off);
     digitalWrite(f, off);
     digitalWrite(g, on);

  }
         if(count==4){
    Serial.println("4");
    digitalWrite(a, off);
    digitalWrite(b, on);
    digitalWrite(c, on);
    digitalWrite(d, off);
    digitalWrite(e, off);
     digitalWrite(f, on);
     digitalWrite(g, on);

  }
         if(count==5){
    Serial.println("5");
    digitalWrite(a, on);
    digitalWrite(b, off);
    digitalWrite(c, on);
    digitalWrite(d, on);
    digitalWrite(e, off);
     digitalWrite(f, on);
     digitalWrite(g, on);

  }
         if(count==6){
    Serial.println("6");
    digitalWrite(a, on);
    digitalWrite(b, off);
    digitalWrite(c, on);
    digitalWrite(d, on);
    digitalWrite(e, on);
     digitalWrite(f, on);
     digitalWrite(g, on);

  }
         if(count==7){
    Serial.println("7");
    digitalWrite(a, on);
    digitalWrite(b, on);
    digitalWrite(c, on);
    digitalWrite(d, off);
    digitalWrite(e, off);
     digitalWrite(f, off);
     digitalWrite(g, off);

  }
         if(count==8){
    Serial.println("8");
    digitalWrite(a, on);
    digitalWrite(b, on);
    digitalWrite(c, on);
    digitalWrite(d, on);
    digitalWrite(e, on);
     digitalWrite(f, on);
     digitalWrite(g, on);

  }
         if(count==9){
    Serial.println("9");
    digitalWrite(a, on);
    digitalWrite(b, on);
    digitalWrite(c, on);
    digitalWrite(d, on);
    digitalWrite(e, off);
     digitalWrite(f, on);
     digitalWrite(g, on);

  }
 delay(500);

    }
  }
