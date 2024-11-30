#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup()
{
  Serial.begin(96000);
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop()
{
  // put your main code here, to run repeatedly:

  while (true)
  {
    Serial.println("hello");
    delay(500);
  }
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}