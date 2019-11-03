void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(9,LOW);
  delayMicroseconds(3);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  digitalWrite(9,LOW);
  delayMicroseconds(3);
  long t=pulseIn(10,HIGH);
  float d=0.017*t;
  Serial.print(d);
  Serial.write("\n");
  delay(50);
}