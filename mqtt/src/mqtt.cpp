/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "application.h"
#line 1 "c:/Users/Nerdom/Desktop/mqtt/src/mqtt.ino"
#include "MQTT.h"

void setup();
void loop();
#line 3 "c:/Users/Nerdom/Desktop/mqtt/src/mqtt.ino"
void callback(char* topic, byte* payload, unsigned int length);
MQTT client("lab.thewcl.com", 1883, callback);

// recieve message
void callback(char* topic, byte* payload, unsigned int length) {
    char p[length + 1];
    memcpy(p, payload, length);
    p[length] = NULL;

    if (!strcmp(p, "RED"))
        RGB.color(255, 0, 0);
    else if (!strcmp(p, "GREEN"))
        RGB.color(0, 255, 0);
    else if (!strcmp(p, "BLUE"))
        RGB.color(0, 0, 255);
    else
        RGB.color(255, 255, 255);
}


void setup() {
    RGB.control(true);

    // connect to the server(unique id by Time.now())
    client.connect("sparkclient_" + String(Time.now()));
    pinMode(D7, INPUT);
    // publish/subscribe
    if (client.isConnected()) {
        client.publish("toddArgon/message","hello");
        client.subscribe("toddArgon/message");
    }
}

void loop() {
    if (client.isConnected())
        client.loop();
    if(digitalRead(D7) == HIGH){
      client.publish("toddArgon/message", "downloadmoreram.com");
    }
    else{

    }
}