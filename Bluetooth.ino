int LEDpin = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(LEDpin,OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
    char data = Serial.read();
    switch(data)
    {
      case'a': digitalWrite(LEDpin,HIGH);break;
      case'b': digitalWrite(LEDpin,LOW);break;
      case'c': for(int i =0; i<10; i++)
      {
       digitalWrite(LEDpin,HIGH);
       delay(500);
       digitalWrite(LEDpin,LOW);
       delay(500); 
      }break;
      default : break;
    }
  }
}
