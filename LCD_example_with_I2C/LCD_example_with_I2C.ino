#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C screen(0x27,16,2);

void setup()
{
  screen.init();
  screen.backlight();
  screen.setCursor(2,0);
  screen.print("Mehmet Eren");
  screen.setCursor(2,1);
  screen.print("Engineer");
}

void loop()
{

}