// Test of Arduino
//Blink

//Pin 13 has onboard LED
int led = 13;

// Setup runs once when board is activated
void setup() {
  //Pin 13 as output
  pinMode (led, OUTPUT);
}

//Loop function runs repeatedly while board is on
void loop() {
  digitalWrite(led, HIGH); //Turn LED on 13 on
  delay(1000);             //Wait 1 second
  digitalWrite(led, LOW);  //Turn LED on 13 off
  delay(1000);             //Wait 1 second 
}

