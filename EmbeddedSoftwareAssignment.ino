int ldrValue;
int brightness;

void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);

}

void loop() {
  ldrValue = analogRead(A0);
  Serial.println(ldrValue);

  delay(20);

  brightness = ldrValue/4;
  analogWrite(5, brightness); 
  Serial.println(brightness);

}
