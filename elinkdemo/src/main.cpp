#include <Arduino.h>
#define LEDPIN 2

// put function declarations here:
int myFunction(int, int);

void setup()
{
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(LEDPIN, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:

  Serial.println("hello");
  delay(500);
  digitalWrite(LEDPIN, !digitalRead(LEDPIN));
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}