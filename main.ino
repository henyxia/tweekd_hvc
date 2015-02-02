int led = 7;
int ctrl = 8;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(ctrl, INPUT);
}

void loop()
{
    if(digitalRead(ctrl) == HIGH)
        digitalWrite(led, LOW);
    else
      digitalWrite(led, HIGH);
    delay(1000);
}
