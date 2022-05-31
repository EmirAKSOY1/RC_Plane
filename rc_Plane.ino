#include <Servo.h>
Servo ch1;
Servo yaw;
int hiz;
char Incoming_value = 0;

const int inputB1 = 9;
const int inputB2 = 10;
const int inputB2E = 11;

void setup() {
  Serial.begin(9600);
  ch1.attach(3);
  yaw.attach(4);
  pinMode(inputB1, OUTPUT);
  pinMode(inputB2, OUTPUT);
  pinMode(inputB2E, OUTPUT);
}

void loop() {
 
 
  

  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == 'S')
    {
          yaw.write(45);
          digitalWrite(inputB1 , LOW);
          digitalWrite(inputB2, LOW);
          ch1.writeMicroseconds(1000);        
    }  
     else if(Incoming_value == 'q')
    {
          hiz=250;
             
    } 
    else if(Incoming_value == '9')
    {
          hiz=225;
             
    } 
    else if(Incoming_value == '8')
    {
          hiz=200;
             
    } else if(Incoming_value == '7')
    {
          hiz=175;
             
    } else if(Incoming_value == '6')
    {
          hiz=150;
             
    } 
     else if(Incoming_value == '5')
    {
          hiz=125;
             
    } 
    else if(Incoming_value == '4')
    {
          hiz=100;
             
    } 
    else if(Incoming_value == '3')
    {
          hiz=75;
             
    } 
    else if(Incoming_value == '2')
    {
          hiz=50;
             
    } 
    else if(Incoming_value == '1')
    {
          hiz=25;
             
    } 
    else if(Incoming_value == '0')
    {
          hiz=0;
             
    } 
    else if(Incoming_value == 'R')
    {
          yaw.write(0);
             
    }   
    else if(Incoming_value == 'L')
    {
          yaw.write(90);
             
    } 
     else if(Incoming_value == 'F')
    {
      analogWrite(inputB2E,hiz);
          digitalWrite(inputB1 , HIGH);
          digitalWrite(inputB2, LOW);
             
    } 
    else if(Incoming_value == 'I')
    {
          yaw.write(0);
          digitalWrite(inputB1 , HIGH);
          digitalWrite(inputB2, LOW);
             
    } 
     else if(Incoming_value == 'G')
    { 
          yaw.write(90);
          digitalWrite(inputB1 , HIGH);
          digitalWrite(inputB2, LOW);
             
    }             
      
  }
 

}
