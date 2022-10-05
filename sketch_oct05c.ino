void setup() {
  pinMode(13,OUTPUT);
  pinMode(A1,INPUT);
}

void loop() {
  int LDR=analogRead(A1);
  analogWrite(13,LDR);
}
