#include<Servo.h>

Servo myServo;
int v = 0;
int p =0;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  //pinMode(A2,INPUT);
  myServo.attach(5);
  myServo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  //v = analogRead(A2);
  //myServo.write(v);
  //Serial.println(v);
  myServo.write(180);
  //delay(200);
  /*
  while(Serial.available()==0){
    delay(100);
  }
  p = Serial.parseInt();
  // solve the exra zero
  Serial.read();
  myServo.write(p);
  Serial.println(p);

  for(p=0;p<=100;p++)
  {
    myServo.write(p);
    ///delay(30);
  }
  for(p=100;p>=0;p--)
  {
    myServo.write(p);
    delay(30);
  }
  */
}
