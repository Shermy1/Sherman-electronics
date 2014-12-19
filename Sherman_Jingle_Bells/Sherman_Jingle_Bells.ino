//Classwork: Encoding Music Assessment
//Michael Sherman
//All work here is honestly obtained and is my own.
//19 December, 2014

//Define Speaker Port:
int speaker = 13;

//Variables for pins:
int tempo = 1000;
int w = tempo;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;

//Constants for Pitch
int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350;
int g4 = 392;

//Variables for Rhythm
 char a = lineARhythm;
 char b = lineBRhyhtm;
 char c = lineCRhythm;
 
//Arrarys for pitch and rhythm
int a [] = {q, q, h, q, q, h, q, q, q, q, w};
int b [] = {q, q, q, q, q, q, q, q, q, q, q, q, h, h};
int c [] = {q, q, q, q, q, q, q, q, q, q, q, q, w};
//Functions to play music

void jingle1() {
  int lineANotes [] = {e4, e4, e4, e4, e4, e4, e4, g4, c4, d4, e4} ;
  int lineARhythm [] = {q, q, h, q, q, h, q, q, q, q, w};
  for (int n=0;n<11;n++) {
    tone(speaker, lineANotes[n], lineARhythm[n]);
    delay(lineARhythm[n]);
  }//end loop A
}//end jingle1

void jingle2() {
  int lineBNotes [] = {f4, f4, f4, f4, f4, e4, e4, e4, e4, d4, d4, e4, d4, g4};
  int lineBRhythm [] = {q, q, q, q, q, q, q, q, q, q, q, q, h, h};
  for (int n=0;n<14;n++) {
    tone(speaker, lineBNotes[n], lineBRhythm[n]);
    delay(lineBRhythm[n]);
  }//end loop B
}//end jingle2

void jingle3() {
  int lineCNotes [] = {e4, e4, e4, e4, e4, e4, e4, g4, c4, d4, e4} ;
  int lineCRhythm [] = {q, q, h, q, q, h, q, q, q, q, w};
  for (int n=0;n<11;n++) {
    tone(speaker, lineCNotes[n], lineCRhythm[n]);
    delay(lineCRhythm[n]);
  }//end loop C
}//end jingle3

void jingle4() {
  int lineDNotes [] = {f4, f4, f4, f4, f4, e4, e4, e4, g4, g4, f4, d4, c4};
  int lineDRhythm [] = {q, q, q, q, q, q, q, q, q, q, q, q, w};
  for (int n=0;n<14;n++) {
    tone(speaker, lineDNotes[n], lineDRhythm[n]);
    delay(lineDRhythm[n]);
  }//end loop D
}//end jingle4

//Set up code
void setup() {
  //Set Speaker Pin to Output
  pinMode(speaker, OUTPUT);
}//end setup

//Loop code
void loop () {
  jingle1();  
  jingle2(); 
  jingle3(); 
  jingle4(); 
}//end loop

