#include <Wire.h>
#include <U8g2lib.h>


#define ADC0 36
#define ADC1 37
#define ADC2 38
#define ADC3 39
#define ADC4 40
#define SW1 24
#define SW2 25
#define SCL 22
#define SDA 23


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
U8G2LIB_SSD1309_128X64 u8g2(U8G2_) 

}

void loop() {
  // put your main code here, to run repeatedly:

}
