#include<LiquidCrystal.h>
LiquidCrystal LCD(12,11,5,4,3,2);
void setup ()
{
  LCD.begin(16,2);
}

void loop()
{
  LCD.setCursor(0,0);
  delay(1000);
  LCD.print("BE ECE");
  delay(1000);
}
