// 0 to 255 brightness 
int brightNess = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,LOW);
  while(brightNess<=255){
    analogWrite(6,brightNess);
    delay(200);
    brightNess=brightNess+10;
  }
  brightNess=0;
}
