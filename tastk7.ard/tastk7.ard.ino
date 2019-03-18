// Example testing sketch for various DHT humidity/temperature sensors
// Written by ladyada, public domain

// REQUIRES the following Arduino libraries:
// - DHT Sensor Library: https://github.com/adafruit/DHT-sensor-library
// - Adafruit Unified Sensor Lib: https://github.com/adafruit/Adafruit_Sensor

#include "DHT.h"

#define DHTPIN 2     // Digital pin connected to the DHT sensor
// Feather HUZZAH ESP8266 note: use pins 3, 4, 5, 12, 13 or 14 --
// Pin 15 can work but DHT must be disconnected during program upload.
int btpin = 3;
int on = HIGH;
int off = LOW;
int isRun = 0;
int btnState;
// Uncomment whatever type you're using!
//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Connect pin 1 (on the left) of the sensor to +5V
// NOTE: If using a board with 3.3V logic like an Arduino Due connect pin 1
// to 3.3V instead of 5V!
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 4 (on the right) of the sensor to GROUND
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor

// Initialize DHT sensor.
// Note that older versions of this library took an optional third parameter to
// tweak the timings for faster processors.  This parameter is no longer needed
// as the current DHT reading algorithm adjusts itself to work on faster procs.
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));
  pinMode(btpin,INPUT);
  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
    while(isClick()){

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

//  // Check if any reads failed and exit early (to try again).
//  if (isnan(h) || isnan(t) || isnan(f)) {
//    Serial.println(F("Failed to read from DHT sensor!"));
//    return;
//  }
//
//  // Compute heat index in Fahrenheit (the default)
//  float hif = dht.computeHeatIndex(f, h);
//  // Compute heat index in Celsius (isFahreheit = false)
//  float hic = dht.computeHeatIndex(t, h, false);
//
//
//  Serial.print(F("Humidity: "));
//  Serial.print(h);
//  Serial.print(F("%  Temperature: "));
//  Serial.print(t);
//  Serial.println(F("°C "));
    }
}
bool isClick(){
 for(int i = 0 ;i < 1000; i++){
   btnState = digitalRead(btpin);
   float h2=0;
   float c2=0;
   float hA [10];
   float cA [10];    
    float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
   if (btnState == HIGH){

    Serial.println("Button Pressed");
     Serial.println("********************************************");
    for(int a = 0 ; a < 10 ; a++){
      float h = dht.readHumidity();
      float t = dht.readTemperature();
      hA[a]=h;
      cA[a]=t;
  
      
     h2 += h;
  // Read temperature as Celsius (the default)
      c2 += t;
      Serial.print("Index: ");
       Serial.print(a);
         Serial.print(F(" Humidity: "));
         Serial.print(h);
         Serial.print(F("%  Temperature: "));
         Serial.print(t);
         Serial.println(F("°C "));
          delay(1000);
     }
     float hAvg =0;
     float cAvh =0;
     for(int i = 0 ; i < 10 ; i++){
        hAvg += (hA[i]/10);
        cAvh += (cA[i]/10);
      }
  
     Serial.print(F("Humidity AVG : "));
         Serial.print(hAvg);
         Serial.print(F("%  Temperature AVG: "));
         Serial.print(cAvh);
         Serial.println(F("°C "));
         Serial.println("***********************");
          delay(500);
     }
     }
  delay(100);

  return true;
  }
