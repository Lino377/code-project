#include <Wire.h>
#include "main.h"
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
void guess(void){
  u8g2.setFontDirection(0);
  u8g2.firstPage();
  do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(0,15,"wait");
  } while( u8g2.nextPage() );
  u8g2.firstPage();
  delay(1000);
  while(true){
    u8g2.firstPage();
    do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(0,15,"entre un nombre");
    u8g2.drawStr(0,22," a deviner:");
    u8g2.drawStr(5,35,"SW1 = 1");
    u8g2.drawStr(5,55,"SW2 = 2");
    if(digitalRead(SW1) == 0){
      guess1();
    }else if(digitalRead(SW2) == 0){
      guess2();
    }
    //attachInterrupt(digitalPinToInterrupt(SW1), guess1, FALLING); 
    //attachInterrupt(digitalPinToInterrupt(SW2), guess2, FALLING); 
  } while( u8g2.nextPage() );
  delay(1000);
  }
}

void menu(void){

}
void loop() {
  u8g2.setFontDirection(0);
  u8g2.firstPage();
  do{
    delay(1000);
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(0,15,"appuiller sur SW1 SVP");
    if(digitalRead(SW1) == 0){
    guess();
    }
    //attachInterrupt(digitalPinToInterrupt(SW1), guess, FALLING); 
    } while( u8g2.nextPage() );
  delay(1000);
}


void guess1(void) {
  // put your main code here, to run repeatedly:

u8g2.firstPage();
  do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0,15,"veuiller passienter");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0030);
  }while ( u8g2.nextPage() );
  delay(1000);
  u8g2.firstPage();
  do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0,15,"veuiller passienter.");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0031);
  }while ( u8g2.nextPage() );
  delay(1000);
  u8g2.firstPage();
  do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0,15,"veuiller passienter..");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0032);
  }while ( u8g2.nextPage() );
  delay(1000);
  u8g2.firstPage();
  do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0,15,"veuiller passienter...");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0033);
  }while ( u8g2.nextPage() );
  delay(1000);
  do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0,15,"veuiller passienter.");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0034);
  }while ( u8g2.nextPage() );
  delay(1000);
  u8g2.firstPage();
    do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0,15,"veuiller passienter..");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0035);
  }while ( u8g2.nextPage() );
  delay(1000);
  u8g2.firstPage();
  u8g2.setFontDirection(0);
  u8g2.setFont(u8g2_font_mozart_nbp_tr);
  u8g2.drawStr(0,15,"le nombre deviner est: ");
  u8g2.setFont(u8g2_font_crox5t_tr);
  u8g2.drawStr(5,35,"1");
  u8g2.setFont(u8g2_font_mozart_nbp_tr);
  delay(5000);
}

void guess2(void) {
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
  u8g2.firstPage();
  u8g2.setFontDirection(0);
  u8g2.setFont(u8g2_font_mozart_nbp_tr);
  u8g2.drawStr(0,15,"le nombre deviner est: ");
  u8g2.setFont(u8g2_font_crox5t_tr);
  u8g2.drawStr(5,35,"2");
  delay(5000);
}
