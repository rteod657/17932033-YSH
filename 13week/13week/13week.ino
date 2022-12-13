
#include <Servo.h>


int servo_pin = 8;
int ang_init = 0;

Servo servo;

void setup() 
{
 
  Serial.begin(9600);
  servo.attach(servo_pin);
  servo.write(ang_init);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  
}

void loop() {
  int deg_in = analogRead(A0);
  int deg = map(deg_in,0,1024,0,180);
  servo.write(deg);
  Serial.println(deg_in);
  

  
  if(deg_in<=170)
  {
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);

    delay(500);
  }
  else if(deg_in<=512)
  {
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
 
    delay(500);
  }
  else if(512<deg_in<=1023)
  {
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);

    delay(500);
  }
}
