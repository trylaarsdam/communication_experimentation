/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "application.h"
#line 1 "c:/Users/Nerdom/Desktop/interrupts/src/interrupts.ino"
void handleInterrupt();
void setup();
void loop();
#line 1 "c:/Users/Nerdom/Desktop/interrupts/src/interrupts.ino"
SYSTEM_MODE(MANUAL);

volatile bool sendData = false;

void handleInterrupt() {
  sendData = true;
}

void setup() {
  pinMode(D7, INPUT);
  pinMode(D5, OUTPUT);
  attachInterrupt(D7, handleInterrupt, RISING);
}

void loop() {
  if(sendData){
    digitalWrite(D5, HIGH);
    delay(1000);
    digitalWrite(D5, LOW);
    delay(1000);
    sendData = false;
  }
}