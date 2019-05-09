#include <Wire.h>
#define LED_indicator 2

int p; //variable to store revieced data

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(LED_indicator, OUTPUT);
  digitalWrite(LED_indicator, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    digitalWrite(LED_indicator,HIGH);
    Serial.println("Data collected");
    p = Serial.parseInt();
    Serial.print(p);
    delay(300);
    digitalWrite(LED_indicator,LOW);
    delay(300);
    Serial.flush();
  }
}
