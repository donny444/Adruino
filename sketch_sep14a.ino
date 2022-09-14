int state = 0;
void setup() {
  pinMode(4, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (digitalRead(4) == HIGH)
  state=!state;
  if(state==1)
  {
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(200);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    delay(200);
    digitalWrite(11, LOW);
  }
  if(state==0)
  {
    digitalWrite(11, HIGH);
    delay(200);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    delay(200);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8, LOW);
  }
}
