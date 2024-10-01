#define LED_PIN 3

void setup() {
  pinMode(LED_PIN, OUTPUT)
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // turn the LED on 
  delay(1000);                      // wait for a second
  digitalWrite(LED_PIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);  

}
