#include <Wire.h>
#include <U8glib.h>


#define ADC0 28
#define ADC1 27
#define ADC2 26
#define ADC3 25
#define ADC4 24
#define SW1 18
#define SW2 19
#define SCL 16
#define SDA 17
U8GLIB_SSD1309_128X64 u8g(U8G_I2C_OPT_NONE);  


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
}

void loop() {
  // put your main code here, to run repeatedly:
  u8g.firstPage();
  do {
    u8g.undoRotation();
    u8g.setFont(u8g_font_tpss);
    u8g.drawStr(0,15,"Hello World!");
  } while ( u8g.nextPage() );
  delay(1000);
  u8g.firstPage();
  do{
    u8g.setCursorFont(u8g_font_cursor);
    u8g.setCursorStyle(82);
    u8g.enableCursor();
    u8g.setCursorPos(64,32);
  }while ( u8g.nextPage() );
  delay(250);
  u8g.disableCursor();
  u8g.firstPage();
  do{
    u8g.setRot90();
    u8g.setCursorFont(u8g_font_cursor);
    u8g.setCursorStyle(82);
    u8g.enableCursor();
    u8g.setCursorPos(32,64);
  }while ( u8g.nextPage() );
  delay(250);
  u8g.disableCursor();
  u8g.firstPage();
  do{
    u8g.setRot180();
    u8g.setCursorFont(u8g_font_cursor);
    u8g.setCursorStyle(82);
    u8g.enableCursor();
    u8g.setCursorPos(64,32);
  }while ( u8g.nextPage() );
  delay(250);
  u8g.disableCursor();
  u8g.firstPage();
  do{
    u8g.setRot270();
    u8g.setCursorFont(u8g_font_cursor);
    u8g.setCursorStyle(82);
    u8g.enableCursor();
    u8g.setCursorPos(32,64);
  }while ( u8g.nextPage() );
  u8g.disableCursor();
  delay(250);

}
