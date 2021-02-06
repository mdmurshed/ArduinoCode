#include<Servo.h>
Servo myServo;
int v = 0;
int p = 0;

const int trigPin = 10;
const int echoPin = 11;
int pin6 = 6;
long duration;
int distanceCm, distanceInch;
int oldValue = 0 , newValue = 0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(13, OUTPUT);
  myServo.attach(5);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  digitalWrite(13, LOW);

  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.0340 / 2;
  newValue = distanceCm;
  Serial.println(distanceCm);
  if (newValue != oldValue)
  {
    //Serial.print("Distance: ");
    //Serial.println(distanceCm);
    //Serial.println(" cm");
    oldValue = newValue;
  }
  if(newValue > 20) {
    digitalWrite(pin6, HIGH);
    //analogWrite(pin6,155);
    myServo.write(178);
    delay(500);
  }
  else {
    digitalWrite(pin6, LOW);
    if(newValue==20) myServo.write(90);
    else myServo.write(2);
    delay(500);
  }
  delay(2000);
}
