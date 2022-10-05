void setup() {
    pinMode(A1,INPUT);
    pinMode(13,OUTPUT);
}

void loop() {
  int VR=analogRead(A1);
  VR=map(VR,0,1023,1,4);
  switch(VR)
  {
    case 1:
    {
      digitalWrite(13,HIGH);
      delay(500);
      digitalWrite(13,LOW);
      delay(500);
      break;
    }
    case 2:
    {
      digitalWrite(13,HIGH);
      delay(1000);
      digitalWrite(13,LOW);
      delay(1000);
      break;
    }
    case 3:
    {
      digitalWrite(13,HIGH);
      delay(1500);
      digitalWrite(13,LOW);
      delay(1500);
      break;
    }
    case 4:
    {
      digitalWrite(13,HIGH);
      delay(2000);
      digitalWrite(13,LOW);
      delay(2000);
      break;
    }
  }
}
