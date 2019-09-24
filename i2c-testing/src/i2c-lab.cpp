/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "application.h"
#line 1 "c:/Users/Nerdom/Desktop/i2c-lab/src/i2c-lab.ino"
void setup();
void loop();
#line 1 "c:/Users/Nerdom/Desktop/i2c-lab/src/i2c-lab.ino"
SYSTEM_MODE(MANUAL);
void setup() {
  pinMode(D6, OUTPUT);
}

void loop() {
  Wire.begin();
  Wire.beginTransmission(0x11);
  digitalWrite(D6,HIGH);
  Wire.write(0xC);
  Wire.endTransmission();
  delay(3);
  Wire.requestFrom(0x11, 1);
  while(Wire.available()==0){
    //wait for wire availablity before reading
    digitalWrite(D6, HIGH);
  }
  digitalWrite(D6, LOW);
  byte value = Wire.read();
  digitalWrite(D6, LOW);
  delay(100);
    Wire.begin();
  Wire.beginTransmission(0x11);
  digitalWrite(D6,HIGH);
  Wire.write(0xD);
  Wire.endTransmission();
  delay(3);
  Wire.requestFrom(0x11, 1);
  while(Wire.available()==0){
    //wait for wire availablity before reading
    digitalWrite(D6, HIGH);
  }
  digitalWrite(D6, LOW);
  byte value2 = Wire.read();
  digitalWrite(D6, LOW);
  delay(100);
}