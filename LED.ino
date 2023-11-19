int ldrPin = A4; // Analog input pin for LDR int ldrValue; // Variable to store LDR value
void setup()
{
pinMode(ldrPin,INPUT);
Serial.begin(9600); // Initialize serial communication for debugging
}
void loop()
{
int readValue;
float realValue;
readValue = analogRead(ldrPin);
realValue = (5.0/1024.0)*readValue;
Serial.println(realValue);
delay(1000);
}
