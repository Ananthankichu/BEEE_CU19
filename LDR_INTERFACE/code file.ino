void setup()
{
  Serial.begin(9600);
  pinMode(0,OUTPUT);
}
void loop()
{
int c=analogRead(A0);
  Serial.println(c);
  
  delay(5);
  if(c<300)
  {
    digitalWrite(0,HIGH);
    delay(1000);
  }
else
{
digitalWrite(7,LOW);
   delay(1000);
  
}}