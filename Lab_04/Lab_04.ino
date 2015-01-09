//Lab_04
//Michael Sherman
//All work here is honestly obtained and is my own.
//9 January, 2015

//Define Speaker Port:
int speaker = 13;

//Variables for note lengths
int tempo = 1500;
int w = tempo;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;

//Constants for Pitch
int r = 0; //rest
int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350;
int g4 = 392;
int a4 = 440;
int b4 = 494;
int c5 = 523;
int d5 = 587;
int e5 = 659;
int f5 = 698;
int g5 = 784;
int a5 = 880;
int b5 = 988;

//Functions to play Tetris

void tetris1() {
  //the transpose variable worked with the analogue read operation to change the octaves of the notes
  int trans = analogRead(0)/100;
  //the Notes array contains all the notes for two measures at a time and the rhythm array contains the different note lengths.
  int lineANotes [] = {e5, b4, c5, d5, e5, d5, c5, b4, a4, a4, c5, e5, d5, c5};
  int lineARhythym [] = {q, e, e, e, s, s, e, e, q, e, e, q, e, e};
  for (int n=0;n<14;n++) {
    //the trans varaible is multiplied by the Notes Array to change the pitch
    tone(speaker, lineANotes[n] * trans, lineARhythym[n]);
    delay(lineARhythym[n]);
  }//end loop A
}//end tetris1

void tetris2() {
  int trans = analogRead(0)/100;
  int lineBNotes [] = {b4, c5, d5, e5, c5, a4, a4};
  int lineBRhythym [] = {q+e, e, q, q, q, q, h};
  for (int n=0;n<7;n++) {
    tone(speaker, lineBNotes[n]*trans, lineBRhythym[n]);
    delay(lineBRhythym[n]);
  }//end loop B
}//end tetris2

void tetris3 () {
  int trans = analogRead(0)/100;
  int lineCNotes [] = {r, d5, f5, a5, g5, f5, e5, c5, e5, d5, c5};
  int lineCRhythym [] = {e, q, e, q, e, e, q+e, e, q, e, e};
  for (int n=0;n<11;n++) {
    tone(speaker, lineCNotes[n]*trans, lineCRhythym[n]);
    delay(lineCRhythym[n]);
  }//end loop C
}//end tetris3

void tetris4 () {
  int trans = analogRead(0)/100;
  int lineDNotes [] = {b4, b4, c5, d5, e5, c5, a4, a4, r};
  int lineDRhythym [] = {q, e, e, q, q, q, q, q, q};
  for (int n=0;n<9;n++) {
    tone(speaker, lineDNotes[n]*trans, lineDRhythym[n]);
    delay(lineDRhythym[n]);
  }//end loop D
}//end tetris4

int sensorPin = 0;
int sensorValue = 0;

//Set up code
void setup() {
  //Set Speaker Pin to Output
  pinMode(speaker, OUTPUT);
}//end setup

//Loop code
void loop () {
  tetris1();
  tetris2();
  tetris3();
  tetris4();
  sensorValue = analogRead(sensorPin); //reads the sensor pin value
  //use the sensorValue in output function
}//End loop
