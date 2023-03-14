#include<stdio.h>
#include<stdbool.h>

int A,B,C,D,Y;

void disp_7447(int D, int C, int B, int A,int Y)
{ 
  printf("%d\n", Y);
}

void setup() {
    // initialize pins
}

int digitalRead(int pin){
    int state;
    scanf("%d", &state);
    return state;
}

void loop() {  
  A = digitalRead(2);
  B = digitalRead(3);  
  C = digitalRead(4);  
  D = digitalRead(5); 
  Y= (A&&B)||(C&&D);
  disp_7447(D,C,B,A,Y);
}
