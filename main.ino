int ctrlPump1 = 5;
int ctrlPump2 = 6;
int ctrlHeat1 = 7;
int ctrlHeat2 = 8;
int pump = 9;
int heat = 10;

void setup()
{
  pinMode(ctrlPump1, INPUT);
  pinMode(ctrlPump2, INPUT);
  pinMode(ctrlHeat1, INPUT);
  pinMode(ctrlHeat2, INPUT);
  pinMode(pump, OUTPUT);
  pinMode(heat, OUTPUT);
}

void loop()
{
    if((digitalRead(ctrlPump1) == HIGH) && digitalRead(ctrlPump2))
		digitalWrite(pump, LOW);
    else
		digitalWrite(pump, HIGH);

     if((digitalRead(ctrlHeat1) == HIGH) && digitalRead(ctrlHeat2))
		digitalWrite(heat, LOW);
    else
		digitalWrite(heat, HIGH);
   delay(1000);
}
