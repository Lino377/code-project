#include <Wire.h>
//#include <U8glib.h>
#include <U8g2lib.h>

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

void loop() {

  u8g2.firstPage();
  //do{
    //u8g2.setFont(u8g2_font_ncenB14_tr);
    //u8g2.drawStr(0,15,"hello world!");
    //u8g2.setFont(u8g2_font_streamline_all_t);
    //u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
    //u8g2.setFontDirection(1);
    //u8g2.drawGlyph(54, 38, 0x003D);
  //} while( u8g2.nextPage() );
  //delay(1000);

    // put your main code here, to run repeatedly:
  u8g2.firstPage();
  do{
    u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
    u8g2.setFontDirection(0);
    u8g2.drawGlyph(54, 38, 0x003D);
  }while ( u8g2.nextPage() );
  delay(1000);
  u8g2.firstPage();
  do{
    u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 17, 0x003D);
  }while ( u8g2.nextPage() );
  delay(1000);
  u8g2.firstPage();
  do{
    u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
    u8g2.setFontDirection(0);
    u8g2.drawGlyph(54, 38, 0x003D);
  }while ( u8g2.nextPage() );
  delay(1000);
  u8g2.firstPage();
  do{
    u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
    u8g2.setFontDirection(3);
    u8g2.drawGlyph(75, 38, 0x003D);
  }while ( u8g2.nextPage() );
  delay(1000);
}
