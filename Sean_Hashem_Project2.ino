#include "Arduino.h"

void setup()
{
  PINMODE(D3, OUTPUT); //Set D3 to output
}

void loop()
{
  DIGITALWRITE(D3, HIGH); //Light up LED
  delay(1000);
  DIGITALWRITE(D3, LOW); //Turn off LED
  delay(1000);
}