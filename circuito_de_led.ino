//Aluno: Sebastião Oliveira Silva Neto - 2011478
int counter;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); /
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); 
  digitalWrite(LED_BUILTIN, LOW);
  for (counter = 0; counter < 10; ++counter) {
    digitalWrite(LED_BUILTIN, HIGH);
  }
}
