/*
  Created by: Evan Beaudoin
  Created on: March 2023
  Uses the HC-SR04 distance sensor to print the distance
*/

const int TRIGPIN = 9;
const int ECHOPIN = 8;

long duration;
int distance;

void setup() {
  Serial.begin (9600);
  pinMode(TRIGPIN,  OUTPUT);
  pinMode(ECHOPIN, INPUT);
 
}
void  loop() {
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);
  
  duration = pulseIn(ECHOPIN, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(10);
}
