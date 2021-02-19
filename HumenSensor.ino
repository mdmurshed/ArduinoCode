int buzzerPin = 3;
int greenPin = 4;
int redPin = 5;

int echoPin = 10  ;
int trigPin = 11;
int distance = 0,duration = 0;

void setup()
{
  pinMode(buzzerPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);

  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.0340 / 2;
  Serial.println(distance);
  delay(500);
  if(distance > 20)
  {
    digitalWrite(buzzerPin,LOW);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    
  }
  else{
    digitalWrite(buzzerPin,HIGH);
    delay(40);
    digitalWrite(buzzerPin,LOW);
    delay(2);
    
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
  }
}
