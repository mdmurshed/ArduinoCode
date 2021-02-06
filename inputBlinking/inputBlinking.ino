
int readPin = A2;
int V2 = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,LOW); 
  V2 = analogRead(readPin);
  Serial.println(V2);
  delay(500);
}
