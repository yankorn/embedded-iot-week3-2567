#include <Arduino.h>

#define LED0 4
#define LED1 0
#define LED2 2
#define LED3 15

void setup(){
  pinMode(LED0, OUTPUT); //setup pin mode
  pinMode(LED1, OUTPUT); //setup pin mode
  pinMode(LED2, OUTPUT); //setup pin mode
  pinMode(LED3, OUTPUT); //setup pin mode
}

void loop(){
  delay(500); //0.5 second
  digitalWrite(LED0,HIGH); //=1
  delay(500);
  digitalWrite(LED0,LOW); //=0
  delay(500); //0.5 second
  digitalWrite(LED1,HIGH); //=1
  delay(500);
  digitalWrite(LED1,LOW); //=0
  delay(500); //0.5 second
  digitalWrite(LED2,HIGH); //=1
  delay(500);
  digitalWrite(LED2,LOW); //=0
  delay(500); //0.5 second
  digitalWrite(LED3,HIGH); //=1
  delay(500);
  digitalWrite(LED3,LOW); //=0
}