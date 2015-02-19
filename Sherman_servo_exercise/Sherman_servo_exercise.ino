//Servo Test
//Range: 0-180

//Bring in Servo Object and Functions
#include <Servo.h>

//Create Instance of Servo Object
Servo leftWheel;
Servo rightWheel;

int lightValue = 0;
int lightPin = 0;

//Setup - RUn One TIme
void setup() {
  //Attach Servo to Pin 9
  leftWheel.attach(9);
  rightWheel.attach(10);
  
  //Rotate Servo at 0 and 180
  leftWheel.write(0);//A
  delay(2000);
  leftWheel.write(90);
  
  rightWheel.write(0);//B
  delay(2000);
  rightWheel.write(0);
    
  leftWheel.write(180);
  rightWheel.write(180);
  delay(4000);
  
  leftWheel.write(0);
  rightWheel.write(0);
  delay(3000);
  
  rightWheel.write(180);
  delay(1000);
  rightWheel.write(90);
  
  leftWheel.write(180);
  delay(1000);
  leftWheel.write(0);
  
}//end void setup

void loop() {
  if (analogRead(0) > 550) {
  leftWheel.write(0);
  rightWheel.write(180);
  }
  if (analogRead(0) < 550) { 
  rightWheel.write(90);
  leftWheel.write(90);
  }
}//end void loop
