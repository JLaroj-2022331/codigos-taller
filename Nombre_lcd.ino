#include <LiquidCrystal.h>
#define RS  6
#define Enable 7
#define D4 2
#define D5 3
#define D6 4
#define D7 5

LiquidCrystal lcd(RS, Enable, D4, D5, D6, D7); 

void setup()
{
  lcd.begin(16,2); 
}
void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Josue Laroj");
  lcd.setCursor(0,1);
  lcd.print("2022331");
}
