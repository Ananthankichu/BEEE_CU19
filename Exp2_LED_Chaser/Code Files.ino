void setup()
{for(int i=10;i<14;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
   for(int i=10;i<14;i++)
  {digitalWrite(i, HIGH);
   if(i==10)
   {digitalWrite(10, HIGH);
   }
   else
   digitalWrite(i+1, HIGH);
   delay(500); 
   digitalWrite(i, LOW);
  }
  
}
