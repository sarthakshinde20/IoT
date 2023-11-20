const int ENA = 6;
const int IN1 = 7;
const int IN2 = 8;
void setup()
{
  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
}
void loop()
{
  analogWrite(ENA,255);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  delay(2000);

  analogWrite(ENA,255);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  delay(2000);
}
