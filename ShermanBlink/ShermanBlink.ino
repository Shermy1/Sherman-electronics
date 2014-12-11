//Michael Sherman
//Led Blink Program

//My functions
void blink() {
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
}//End blink

//setup function
void setup() {
  //Setup Pin 9 for output
  pinMode(9, OUTPUT);
}//End setup

void loop() {
  blink();
}//End loop


