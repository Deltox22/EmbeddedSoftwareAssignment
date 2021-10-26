const int ledPin = 5; 

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); 

}

void loop() {
 digitalWrite(ledPin, HIGH);

}
