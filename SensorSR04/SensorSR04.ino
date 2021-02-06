int trigPin = 9;
int echoPin = 11;
int pin5 = 5;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  //Serial.begin(9600);
  pinMode(pin5,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  duration = pulseIn(echoPin,HIGH);
  distance = duration*0.034/2;

  //Serial.print("Distance:");
  //Serial.println(distance); 
  if(distance <=50){
    //digitalWrite(pin5,HIGH);
    analogWrite(pin5,distance*255/30);
  }
  else {
    digitalWrite(pin5,LOW);
  }
  
}
