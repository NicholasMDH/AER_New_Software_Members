void setup() {
  // put your setup code here, to run once:
  pinMode(D3,OUTPUT); //sets pin as an output

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D3, HIGH); //turns it on
  delay(1000); //delays by 1 s
  digitalWrite(D3, LOW); //turns it off
  delay(1000); //1000ms = 1 s

}
