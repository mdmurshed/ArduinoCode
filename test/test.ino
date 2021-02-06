int pinA2 = A2;
int pin13 = 13;
int pin10 = 10;
int V;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin13,OUTPUT);
  pinMode(pin10,OUTPUT);
  
  pinMode(pinA2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  V = analogRead(pinA2);
  Serial.println(V*5./1024.);
  V = V*5./1024.;
  analogWrite(pin10,V);
}
