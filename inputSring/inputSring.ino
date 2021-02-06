String color;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    color = Serial.readString();
    Serial.print(color);
    if (color == "red\n" || color == "green\n" || color == "blue\n") {
      Serial.println("ok");
      digitalWrite(6, HIGH);
      delay(500);
    }
  }
}
