//Michael Sherman
//LED Blink Pattern
//Lab_02

//My Functions

void blink() {
  int pins [] = {2, 3, 4, 5, 6, 7, 8, 9};
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
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins[i], HIGH);
    delay(100);
  }//End loop 3
   for (int i = 8; i > 0; i--) {
    digitalWrite(pins[i], LOW);
    delay(100);
  }//End loop 4
  for (int i = 0; i <8; i++) {
    digitalWrite(pins[i], HIGH);
    delay(50);
    digitalWrite(pins[i], LOW);
    delay(50);
  }//End loop 5
  for (int i = 8; i > 0; i--) {
    digitalWrite(pins[i], HIGH);
    delay(100);
  }//End loop 6
 for (int i = 0; i <8; i++) {
    digitalWrite(pins[i], LOW);
    delay(100);
 }// End loop 7
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
