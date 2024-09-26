void setup() {

  pinMode(D3, OUTPUT);
}

void loop() {

  digitalWrite(D3, HIGH); //on
  
  delay(1000); 

  digitalWrite(D3, LOW); //off

  delay(1000);
}