#define mainPin D23

void setup() {
  // put your setup code here, to run once:
  pinMode(mainPin, OUTPUT);
}

void loop() {
  // light on
  digitalWrite(mainPin, High);

  delay(1000);

  // light off
  digitalWrite(mainPin, Low);

  delay(1000);
}
