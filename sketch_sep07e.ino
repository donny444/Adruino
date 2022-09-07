int LEDpin[4]={8,9,10,11};
void setup() {
  for(int i=0;i<=3;i++)
  pinMode(LEDpin[i],OUTPUT);
}

void loop() {
  for(int i=0;i<=3;i++)
  {
    digitalWrite(LEDpin[i],HIGH);
    delay(100);
    digitalWrite(LEDpin[i],LOW);
    delay(100);
  }
}
