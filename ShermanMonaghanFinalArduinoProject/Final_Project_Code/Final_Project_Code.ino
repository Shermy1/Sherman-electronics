//Michael Sherman and Joe Monaghan
//Final Project: Electronics
//March 3, 2015

#include <Servo.h>
Servo Motor;
//90 - full stop
//70 - full reverse
//110 - full forward

//starting variables
int lightValue = 0;
int lightPin = 2;
int sensorPin = 3;
int sensorValue = 0;int speaker = 12;

//Variables for rhythm:
int tempo = 1000;
int w = tempo;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;

//Define Pitches for C Scale
int c4 = 261;
int d4 = 293;
int g4 = 392;

//sound for the launch sequence
void launchSound () {
  //two arrays: one for notes and one for rhythms
  int Notes [] = {g4, c4, d4, g4};
  int Rhythm [] = {q, e, e, q};
  for (int n=0;n<4;n++) {
    tone(speaker, Notes[n], Rhythm[n]);
    delay(Rhythm[n]);
  }//end loop
}//end launchSound

void setup() {
  //Inititate the 2 and 3 pin LED's and attach Vex motor.
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  Serial.begin(9600);
  Motor.attach(11);
   
  while (analogRead(1) > 500) {
    digitalWrite(3, HIGH);
    tone(12, c5);
    Motor.write(90);
  }//do nothing statement. Acts as an inidcator
  
  //turn off light and tone to show progress of launch sequence
  digitalWrite(3, LOW);
  tone(12, 0);
  
  //begin winding backwards for halfd a second then stop for further instructions
  Motor.write(70);
  delay(500);
  Motor.write(90); 
  
  while (analogRead(0) > 700) {
    digitalWrite(2, HIGH);
  }//do nothing statement. Second indicator
  
  //when the photoresistor is completely covered, then play the launch sound, drive the motor full force clockwise for 2 seconds, and then stop it
  if (analogRead(0) < 700) {
    launchSound();
    Motor.write(110);
    delay(2000);
    Motor.write(90);
  }//end if statement
  
}//end void setup

void loop() {
  //define the sensor values as the analogRead port
  
  sensorValue = analogRead(1);
  //Serial.println(sensorValue);
  lightValue = analogRead(0);
  Serial.println(lightValue);
 
}//end void loop
