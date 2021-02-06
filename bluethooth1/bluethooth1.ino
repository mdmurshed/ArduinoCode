int pin10 = 10;
int brightness = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin10,OUTPUT);
  pinMode(13,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,LOW);
  if(Serial.available()>0){
    char data = Serial.read();
    if(data == 'o'){
      digitalWrite(pin10,HIGH);
      brightness=255;
    }
    else if(data == 'f'){
      digitalWrite(pin10,LOW);
      brightness=0;
    }
    else if(data =='u'){
      analogWrite(pin10,brightness);
      brightness+=10;
    }
    else if(data =='d'){
      analogWrite(pin10,brightness);
      brightness-=10;
    }
    if(brightness<0) brightness = 0;
    else if(brightness>254) brightness =254; 
    Serial.println(data);
    Serial.println(brightness);
    
  }
  delay(50);
}
