int pin10 = 10;

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
    switch(data){
      case 'a' : digitalWrite(pin10,HIGH);break;
      case 'd' : digitalWrite(pin10,LOW);break;
      default:break;
    }
    Serial.println(data);
  }
  delay(50);
}
