/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "application.h"
#line 1 "c:/Users/Nerdom/Desktop/spi-testing/src/spi-testing.ino"
void setup();
void loop();
#line 1 "c:/Users/Nerdom/Desktop/spi-testing/src/spi-testing.ino"
SYSTEM_MODE(MANUAL);

void setup() {
  SPI.begin(SPI_MODE_MASTER);
  SPI.setBitOrder(MSBFIRST);
  SPI.setClockSpeed(20,MHZ);
  SPI.setDataMode(SPI_MODE0);
  pinMode(D8, OUTPUT);
  pinMode(D4, OUTPUT);
}

void loop() {
  
  digitalWrite(D8, HIGH);
  digitalWrite(D4, LOW);
  SPI.transfer(1);
  delay(500);
  SPI.transfer(0);
  delay(500);
  digitalWrite(D8, LOW);
  digitalWrite(D4, HIGH);
  
  SPI. transfer(1);
  delay(500);
  SPI.transfer(0);
  delay(500);
}