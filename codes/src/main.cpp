#include <Arduino.h>
int n=13;
int m=12;
void setup() {
  pinMode(n, OUTPUT);
  pinMode(m, OUTPUT);
// put your setup code here, to run once:

//Declaring all variables as integers
int Z=0,Y=0,X=1;
int B,A;
  A=(X&&(Y||Z));
  B=(X&&Y) || (X&&Z);
  digitalWrite(n, A);
  digitalWrite(m, B);
  // put your main code here, to run repeatedly:
}
void loop() {
}
//&& is the AND operation
// || is the OR operation
// ! is the NOT operation
