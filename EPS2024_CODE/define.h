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
float sum0 =0;
float sum1 =0;
float sum2 =0;
float sum3 =0;
float sum4 =0;
float adc0 =0;
float adc1 =0;
float adc2 =0;
float adc3 =0;
float adc4 =0;
float moyadc0 =0;
float moyadc1 =0;
float moyadc2 =0;
float moyadc3 =0;
float moyadc4 =0;
#define I2C_ADRESS 0x3C 
#define MCP23017 0x20 //  7 bit adress 0010 0000 intead of 0100 0000 

void setup() {
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
Wire.beginTransmission(MCP23017);
Wire.write(0x01); //selects the IODIRB register
Wire.write(0x00); // sets all port B pins to outputs
Wire.endTransmission(); //ends communication with slave device
}