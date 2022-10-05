void setup() {
  pinMode(A1,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  int VR=analogRead(A1);
  VR=map(VR,0,1023,1,5);
  switch(VR)
  {
    case 1:
    {
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        break;
    }
    case 2:
    {
        digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        break;
    }
    case 3:
    {
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        break;
    }
    case 4:
    {
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
        break;
    }
    case 5:
    {
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
        break;
    }
    default:
    {
      digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        break;
    }
  }
  Serial.println(VR);
}
