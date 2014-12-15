//Michael Sherman
//LED Blink Pattern
//Lab_02

//My Functions

void blink() {
  int pins [] = {2, 3, 4, 5, 6, 7, 8, 9};
  //quickly runs from pin 2 to pin 9 and turns off the previous light. Goes all the way back 
  for (int i = 0; i <8; i++) {
    digitalWrite(pins[i], HIGH);
    delay(50);
    digitalWrite(pins[i], LOW);
    delay(50);
  }//End for loop 1
  for (int i = 8; i > 0; i--) {
    digitalWrite(pins[i], HIGH);
    delay(50);
    digitalWrite(pins[i], LOW);
    delay(50);
  }//End for loop 2
  //more slowly goes from pin 2 to pin 9 and keeps them on throughout it. Goes all the way back in reverse.
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], HIGH);
    delay(100);
  }//End loop 3
   for (int i = 8; i > 0; i--) {
    digitalWrite(pins[i], LOW);
    delay(100);
  }//End loop 4
  //Breaks up the LED's turning all the way on and staying on with another first for loop pattern
  for (int i = 0; i <8; i++) {
    digitalWrite(pins[i], HIGH);
    delay(50);
    digitalWrite(pins[i], LOW);
    delay(50);
  }//End loop 5
  //performs the same for loop as 3 and 4 except backwards.
  for (int i = 8; i > 0; i--) {
    digitalWrite(pins[i], HIGH);
    delay(100);
  }//End loop 6
 for (int i = 0; i <8; i++) {
    digitalWrite(pins[i], LOW);
    delay(100);
 }// End loop 7
 //Turns the ends on, pins 2 and 9, and slowly works its way to the center and then crosses.
 for (int i = 0; i < 8; i++) {
   digitalWrite(pins[i], HIGH);
   delay(100);
   digitalWrite(pins[7-i], HIGH);
   delay(100);
}//end loop 8
  
  
}//End Blink function


void setup() {
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
}//End setup

void loop() {
  blink();  
}//End loop
