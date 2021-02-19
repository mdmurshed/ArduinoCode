int buzzerPin = 3;
int greenPin = 4;
int redPin = 5;

int flamePin = 11;
int Flame=true;

void setup()
{
  pinMode(buzzerPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(flamePin,INPUT);
  pinMode(A0,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  Serial.println(Flame);
  Flame = digitalRead(flamePin) ;
  if(Flame == true)
  {
    digitalWrite(buzzerPin,LOW);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    Serial.println("Fire");
    
  }
  else{
     digitalWrite(buzzerPin,HIGH);
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    Serial.println("NO Fire");
  }
}
