#include <Arduino.h>
void sevenseg(int a,int b,int c,int d,int e,int f,int g,int D)
{
  digitalWrite(2, a); 
  digitalWrite(3, b); 
  digitalWrite(4, c); 
  digitalWrite(5, d); 
  digitalWrite(6, e); 
  digitalWrite(7, f);     
  digitalWrite(8, g);
  digitalWrite(9, D); 
}
void setup() 
{
    pinMode(2, OUTPUT);  
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT); 
    pinMode(9, OUTPUT); /*Dot*/
    pinMode(10, INPUT);
    pinMode(11, INPUT);
    pinMode(12, INPUT);          
}
void loop() 
{
byte k=101;
int x= int(k);

switch (x)
{
case 000:sevenseg(1,1,1,1,1,1,1,0);break;
case 001:sevenseg(0,1,1,1,1,1,1,1);break;
case 010:sevenseg(1,0,1,1,1,1,1,1);break;
case 011:sevenseg(1,1,0,1,1,1,1,1);break;
case 100:sevenseg(1,1,1,0,1,1,1,1);break;
case 101:sevenseg(1,1,1,1,0,1,1,1);break;
case 110:sevenseg(1,1,1,1,1,0,1,1);break;
case 111:sevenseg(1,1,1,1,1,1,0,1);break;
default: sevenseg(1,1,1,1,1,1,1,1); break;
}
  
}
