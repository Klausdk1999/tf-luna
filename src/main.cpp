#include <Arduino.h>

const int trigPinAJ = 16; // D0
const int echoPinAJ = 5; // D1

const int trigPinHC = 14; // D5
const int echoPinHC = 12; // D6

#define SOUND_VELOCITY 0.034

long durationAJ;
long durationHC;
float distanceCmAJ;
float distanceCmHC;

void setup() {
  Serial.begin(115200); // Starts the serial communication
  pinMode(trigPinAJ, OUTPUT); // Sets the trigPinAJ as an Output
  pinMode(echoPinAJ, INPUT); // Sets the echoPinAJ as an Input
  pinMode(trigPinHC, OUTPUT); // Sets the trigPinHC as an Output
  pinMode(echoPinHC, INPUT); // Sets the echoPinHC as an Input
}

void loop() {
  // Clears the trigPinAJ
  digitalWrite(trigPinAJ, LOW);
  delayMicroseconds(2);
  // Sets the trigPinAJ on HIGH state for 10 micro seconds
  digitalWrite(trigPinAJ, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinAJ, LOW);
  
  // Reads the echoPinAJ, returns the sound wave travel time in microseconds
  durationAJ = pulseIn(echoPinAJ, HIGH);
  
  // Calculate the distance
  distanceCmAJ = durationAJ * SOUND_VELOCITY/2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance AJ-SR04M (cm): ");
  Serial.println(distanceCmAJ);
  
  delay(1000);

  // Clears the trigPinHC
  digitalWrite(trigPinHC, LOW);
  delayMicroseconds(2);
  // Sets the trigPinHC on HIGH state for 10 micro seconds
  digitalWrite(trigPinHC, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinHC, LOW);
  
  // Reads the echoPinHC, returns the sound wave travel time in microseconds
  durationHC = pulseIn(echoPinHC, HIGH);
  
  // Calculate the distance
  distanceCmHC = durationHC * SOUND_VELOCITY/2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance HC(cm): ");
  Serial.println(distanceCmHC);

  delay(1000);
}