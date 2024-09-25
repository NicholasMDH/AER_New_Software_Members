#define mainPin D23

void setup(){
  //connect to light?
  pinMode(mainPin, OUTPUT);
}

void loop(){
  //turn light on
  digitalWrite(mainPin, HIGH);

  //add a delay
  delay(1000);

  //turn light off
  digitalWrite(mainPin, LOW);

  //add a delay
  delay(1000);

}
