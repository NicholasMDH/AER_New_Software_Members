void setup() { // initialization
  // set pin D3 to output
  pinMode(D3, OUTPUT);
}

void loop() { // loop
  // turn LED on
  digitalWrite(D3, HIGH); // HIGH = ON
  delay(500); // delay in ms
  // turn LED off
  digitalWrite(D3, LOW); // LOW = OFF
  delay(500);
}