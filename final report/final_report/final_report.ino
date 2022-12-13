#include <LiquidCrystal.h>
#include <Wire.h>
#include <Servo.h>
LiquidCrystal lcd(12,11,5,4,3,2);

int servoPin=7;
int red=10;
int yellow=9;
int green=8;
Servo servo;

void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
  servo.attach(servoPin);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop()
{
  int readValue=analogRead(A0);
  float voltage = readValue*5.0/1024.0; //섭씨온도로 변환
  float temper=voltage*100-50;          //섭씨온도로 변환
  
  lcd.setCursor(1,0);                   // lcd에 온도 출력
  lcd.write("temp : ");
  lcd.print(temper);
  
  Serial.print("Temper : ");            //시리얼 모니터에 온도 출력
  Serial.println(temper);
  delay(500);
  
  int angle = map(temper,-38,0,180,0); // -40도 에서 20도까지
  Serial.print("degree : ");            //시리얼 모니터에 서보모터 각도 출력
  Serial.println(angle);
  
  if(temper>-17)                  //-17도 보다 높을 경우 노란색 led on
  {
    servo.write(angle);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    lcd.setCursor(1,1);
    lcd.print("HIGH temp");
  }
  
  else if(temper<-21)             //-21도 보다 낮을 경우 빨간색 led on
  {
    servo.write(angle); 
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    lcd.setCursor(1,1);
    lcd.print("LOW temp");
  }
  
  else                            //-17~-21도 사이에 있을 경우 초록색 led on
  {
    servo.write(angle);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);
    lcd.setCursor(1,1);
    lcd.print("proper temp");
  }

}
