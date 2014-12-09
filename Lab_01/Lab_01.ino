//Michael Sherman
//Lab 01
//Started: 12/5/14

//Test Functions:
  //void printHappy(String name) {
  //  String result = "Happy Birthday " + name;
  //  Serial.println(result);
  //} //End printHappy
  //
  //float computeArea(float wid, float hei) {
  //  float area = wid*hei;
  //  return area;
  //  
  //} //End Float
//End Test Functions

void function1() {
  Serial.println ("I am an Arduino and I communicate at");
  Serial.println ("9600 Baud rate. Ports 0 and 1 are used");
  Serial.println ("for serial communication.");
  Serial.println();
  Serial.println ("Serial communication works well for debugging");
  Serial.println ("and monitoring sensor values during the");
  Serial.println ("execution of a program.");
  Serial.println("");
}//End function1

void function2a(int x, int y) {
  Serial.println((x/2)*y);
    Serial.println("");
}//End fucntion2a

void function2b(int x, int y) {
  Serial.println((2*x)+(x*y));
    Serial.println("");
}//End function2b

void function3 () {
  String Characters [] = {"Doctor Who", "Indiana Jones", "Darth Vader", "Kirby", "Jim Halpert"};
  Serial.println("My favorite movie characters are: ");
  for (int i = 0; i < 5; i++) {
    Serial.println(Characters[i]);
  } //End for loop
    Serial.println("");
}//End function3

void function4 () {
  String Numbers [] = {"1", "2", "3", "4", "5", "6", "7", "8"};
  for (int i = 0; i < 8; i++) {
    Serial.println(Numbers[i]);
  }//End for loop 1
  for (int i = 7; i > -1; i--) {
    Serial.println(Numbers[i]);
  }//End for loop 2
  for (int i = 1; i < 8; i+=2) {
    Serial.println(Numbers[i]);
  }//End for loop 3
  for (int i = 0; i < 8; i+=2) {
    Serial.println(Numbers[i]);
  }//End for loop 4
  for (int i = 8; i > -1; i-=2) {
    Serial.println(Numbers[i]);
  }//End for loop 5
  for (int i = 7; i > -1; i-=2) {
    Serial.println(Numbers[i]);
  }//End for loop 6
  Serial.println("");
}//End function4
  
void function5 () {
  String Notes [] = {"C", "D", "E", "F", "G", "A", "B", "C"};
  for (int i = 0; i < 2; i++) {
    for (int p = 0; p < 8; p++) {
      Serial.println(Notes[p]);
    }//End nested for loop
  }//End for loop
  Serial.println("");
}//End function 5

void printFibo (int n) {
  int prev = 0;
  int cur = 1;
  int fibo = 0;
  Serial.println("The Fibonacci Sequence starts:");
  for (int i = 0; i < n; i++) {
    prev = cur;
    cur = fibo;
    fibo = prev + cur;
    Serial.println(fibo);
  }//End for loop
  Serial.println("");
}//End printFibo

float findTan(int x) {
  float T = sin(x)/cos(x);
  Serial.println("The Tangent of X = ") + T;
  return T;
}//End find Tangent

// Wild numbers
void function8() {
 for (long i = 0; i < 100000; i++) {
 Serial.println(i*10);
 Serial.println("");
 //What I expected: The loop will repeat 5 times, repeating powers of 10 until it is equal to 10^5 or 100000
 //What actually happened: the function countes up by 10's from 0 to 30000 and then counts back down to -30000 and continues to alternate and repeat.
 //Why does this happen? Because the Arduino board can only hold a maximum value of a 16 bit (around 32,000) as an integer data type, the wild numbers function counts up and then turns around at around 32000 to becomore more negative
 //What is the pattern? The wild function generates multiples of ten in order starting from and approaching 100000. As it reaches around 32,000, the numbers turn around and tend towards -32,000. This will repeat until it iterates to 100000.
 //How can you change the results? By changing the data type from integer to long, the arduino board can store more than a 16 bit number and reaches 100000.
 }//End for loop
}//End function 8

void function9 () {
  long computeSum = 0;
  for (int i = 0; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0){
      computeSum = computeSum + i;
    }//End if statement
  }//End for loop 1
  Serial.println("The sum of all multiples of 3 and 5 from 0 to 999 = ");
  Serial.println(computeSum);
  Serial.println("");
}//End function9
  
void function10 () {
  //concantentation
  String words [] = {"Can", "Chair", "went", "Home", "to"};
  String result = "";
  for (int i = 0; i < 5; i++) {
    //Choose random index
    //pull value from words array with index
    //add the value to the result
    int index = random(5);
    result += words[index] + " ";
  }//End for loop
  Serial.println(result);
}//End fucntion 10
    
void setup() {
  Serial.begin(9600); //Start Serial Communication of 9600 bits per second
  function1();
  function2a(120, 512);
  function2b(97, 32);
  function3();
  function4();
  function5();
  printFibo(11);
  Serial.println(findTan(56));
  //function8();
  function9();
  function10();
 
  //Test Code:
  //printHappy("Michael Sherman");
  //computeArea(30,40);
  //Serial.println(computeArea(30,40));
  //End Test Code
} //End Setup

void loop()  {
} //End Loop

