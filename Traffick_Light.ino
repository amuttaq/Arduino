int i = 0;

int count = 0;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  while (count < 5) {
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
    count ++;
  }
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
}
