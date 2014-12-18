//Michael Sherman
//Music Playing with Piezo and Arduino
//18 December, 2014

//Define Speaker Port:
int speaker = 11;

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
int e4 = 330;
int f4 = 350;
int g4 = 392;
int an4 = 440;
int b4 = 494;
int c5 = 523;

//ascending Scale Function
void scaleUp () {
  int scale [] = {c4, d4, e4, f4, g4, an4, b4, c5};
  
  for (int n = 0; n < 8; n++) {
    tone(speaker, scale[n], q);
    delay(q);
  }//end for loop
}//end Scale Up

//Fucntion Twinkle 1
void twinkle1() {
  //Notes for Twinkle Line 1
  int lineANotes [] = {c4, c4, g4, g4, an4, an4, g4, f4, f4, e4, e4, d4, d4, c4};
  int lineARhythm [] = {q, q, q, q, q, q, h, q, q, q, q, q, q, h};
  
  for (int n=0;n<14;n++) {
    tone(speaker, lineANotes[n], lineARhythm[n]);
    delay(lineARhythm[n]);
  }//end loop
}//end fucntion twinkle

void twinkle2() {
  int lineBNotes [] = {g4, g4, f4, f4, e4, e4, d4, g4, g4, f4, f4, e4, e4, d4};
  int lineBRhythm [] = {q, q, q, q, q, q, h, q, q, q, q, q, q, h};
  for (int n=0;n<14;n++) {
    tone(speaker, lineBNotes[n], lineBRhythm[n]);
    delay(lineBRhythm[n]);
  }//end loop
}//end twinkle2

void twinkle3 () {
  int lineCNotes [] = {c4, c4, g4, g4, an4, an4, g4, f4, f4, e4, e4, d4, d4, c4};
  int lineCRhythm [] = {q, q, q, q, q, q, h, q, q, q, q, q, q, h};
  
  for (int n=0;n<14;n++) {
    tone(speaker, lineCNotes[n], lineCRhythm[n]);
    delay(lineCRhythm[n]);
  }//end loop
}//end twinkle3

void setup () {
  //Set Speaker Pin to Output
  pinMode(speaker, OUTPUT);
}//end setup

void loop () {
  //scaleUp();
  twinkle1();
  twinkle2();
  twinkle3();
}//end loop


