void setup() {
  pinMode(D3, OUTPUT);
}

void loop() {
  digitalWrite(D3, HIGH); // turn on D3
  delay(1000); // wait 1 second
  digitalWrite(D3, LOW); // turn off D3
  delay(1000); // wait 1 second
}