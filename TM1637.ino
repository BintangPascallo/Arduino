#include <TM1637Display.h>

#define CLK 3
#define DIO 2

unsigned int angka = 0;
TM1637Display display(CLK, DIO);

void setup()
{
  display.setBrightness(0x0f);  //maximum brightness
}

void loop()
{
  for(angka = 0; angka < 9999; angka++) 
  {
    display.showNumberDec(angka); //tampilkan angka
    delay(100);  
  }
}
