const int trigPin = 10;
const int echoPin = 11;
int pin7 = 7;
long duration;
int distanceCm, distanceInch;
int oldValue = 0 , newValue = 0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(13, OUTPUT);
  
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
  if(newValue != oldValue)
  {
    //Serial.print("Distance: ");
    Serial.print(distanceCm);
    //Serial.println(" cm");
    oldValue = newValue;
  }
  if(newValue>20){
    digitalWrite(pin7,HIGH);
  }
  else{
    digitalWrite(pin7,LOW);
  }
  
  delay(2000);
}
