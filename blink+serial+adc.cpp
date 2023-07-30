#include <Arduino.h>

const int ledPin = 13;
const int adcPin = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  Serial.println("LED is ON");
  int adcValue = analogRead(adcPin);
  Serial.print("ADC Value: ");
  Serial.println(adcValue);
  delay(1000);
  
  digitalWrite(ledPin, LOW);
  Serial.println("LED is OFF");
  delay(1000);
}
