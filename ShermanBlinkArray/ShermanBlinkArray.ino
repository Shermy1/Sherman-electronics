//Michael Sherman
//LED link and Array Assignment

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
  
}//


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

