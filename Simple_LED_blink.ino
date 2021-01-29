int counter;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  for (counter = 0; counter < 10; ++counter) {
    digitalWrite(3, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}
