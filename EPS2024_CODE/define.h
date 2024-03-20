#include <U8g2lib.h>
#include <Wire.h>

#define ADC0 28
#define ADC1 27
#define ADC2 26
#define ADC3 25
#define ADC4 24
#define SW1 18
#define SW2 19
#define SCL 16
#define SDA 17
//U8GLIB_SSD1309_128X64 u8g(U8G_I2C_OPT_NONE);  
U8G2_SSD1309_128X64_NONAME0_F_HW_I2C u8g2(U8G2_R0, /*reset=*/U8X8_PIN_NONE);  

#define I2C_ADRESS 0x3C 


void setup() {
  // put your setup code here, to run once:
pinMode(ADC0, INPUT);
pinMode(ADC1, INPUT);
pinMode(ADC2, INPUT);
pinMode(ADC3, INPUT);
pinMode(ADC4, INPUT);
pinMode(SDA, OUTPUT);
pinMode(SCL, OUTPUT);
pinMode(SW1, INPUT_PULLUP);
pinMode(SW2, INPUT_PULLUP);
Wire.begin();
u8g2.begin();
}