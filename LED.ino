int del =5;
int a = 0;
void setup()
{
  pinMode(3, OUTPUT);
}
void loop()
{
  for(a=0; a<256; a++)
  {
    analogWrite(3,a);
    delay(del);
  }
  for(a=255; a>=0; a--);
  {
    analogWrite(3,a);
    delay(del);
  }
  delay(200);
}

