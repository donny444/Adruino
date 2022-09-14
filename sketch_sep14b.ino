void setup() {
  attachInterrupt(0,INTR,HIGH);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(1000);
}
void INTR()
{
  for(int I=0;I<=5;I++)
  {
    digitalWrite(9,HIGH);
    delay(2000);
    digitalWrite(9,LOW);
    delay(2000);
  }
}
