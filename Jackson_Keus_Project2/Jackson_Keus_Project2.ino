#define ledPin D3

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  delay(1000);
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
}
