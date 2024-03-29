#include <Wire.h>
#include "define.h"
#include <U8g2lib.h>
#include <MCP23017.h>

void loop() {
  u8g2.setFontDirection(0);
  u8g2.firstPage();
do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(0,15,"main menu");
    u8g2.drawStr(0,35,"SW1 = test input");
    u8g2.drawStr(0,55,"SW2 = test output");
    if(digitalRead(SW1) == 0){
      testIn();
    }else if(digitalRead(SW2) == 0){
      testOut();
    }
  } while( u8g2.nextPage() );
  delay(1000);
}


void testOut(void){
  //waiting
    u8g2.setFontDirection(0);
    u8g2.firstPage();
    do{
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.setFontDirection(0);
      u8g2.drawStr(0,15,"wait");
      u8g2.setFont(u8g2_font_battery19_tn);
      u8g2.setFontDirection(1);
      u8g2.drawGlyph(54, 38, 0x0030);
    }while ( u8g2.nextPage() );
    delay(100);
    u8g2.firstPage();
    do{
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.setFontDirection(0);
      u8g2.drawStr(0,15,"wait.");
      u8g2.setFont(u8g2_font_battery19_tn);
      u8g2.setFontDirection(1);
      u8g2.drawGlyph(54, 38, 0x0031);
    }while ( u8g2.nextPage() );
    delay(100);
    u8g2.firstPage();
    do{
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.setFontDirection(0);
      u8g2.drawStr(0,15,"wait..");
      u8g2.setFont(u8g2_font_battery19_tn);
      u8g2.setFontDirection(1);
      u8g2.drawGlyph(54, 38, 0x0032);
    }while ( u8g2.nextPage() );
    delay(100);
    u8g2.firstPage();
    do{
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.setFontDirection(0);
      u8g2.drawStr(0,15,"wait...");
      u8g2.setFont(u8g2_font_battery19_tn);
      u8g2.setFontDirection(1);
      u8g2.drawGlyph(54, 38, 0x0033);
    }while ( u8g2.nextPage() );
    delay(100);
    do{
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.setFontDirection(0);
      u8g2.drawStr(0,15,"wait.");
      u8g2.setFont(u8g2_font_battery19_tn);
      u8g2.setFontDirection(1);
      u8g2.drawGlyph(54, 38, 0x0034);
    }while ( u8g2.nextPage() );
    delay(100);
    u8g2.firstPage();
    do{
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.setFontDirection(0);
      u8g2.drawStr(0,15,"wait..");
      u8g2.setFont(u8g2_font_battery19_tn);
      u8g2.setFontDirection(1);
      u8g2.drawGlyph(54, 38, 0x0035);
    }while ( u8g2.nextPage() );
    u8g2.firstPage();
  while(true){
    u8g2.setFontDirection(0);
    u8g2.firstPage();
    do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(0,15,"long or short");
    u8g2.drawStr(5,35,"SW1 = short");
    u8g2.drawStr(5,55,"SW2 = long");
    if(digitalRead(SW1) == 0){
      testOutshort();
    }else if(digitalRead(SW2) == 0){
      testOutlong();
    }
  } while( u8g2.nextPage() );
  delay(1000);
  }
}



void testIn(void){
  //waiting
    u8g2.setFontDirection(0);
    u8g2.firstPage();
    do{
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.setFontDirection(0);
      u8g2.drawStr(0,15,"wait");
      u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
      u8g2.setFontDirection(0);
      u8g2.drawGlyph(54, 38, 0x003D);
    }while ( u8g2.nextPage() );
    delay(100);
    u8g2.firstPage();
    do{
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.setFontDirection(0);
      u8g2.drawStr(0,15,"wait.");
      u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
      u8g2.setFontDirection(1);
      u8g2.drawGlyph(54, 17, 0x003D);
    }while ( u8g2.nextPage() );
    delay(100);
    u8g2.firstPage();
    do{
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.setFontDirection(0);
      u8g2.drawStr(0,15,"wait..");
      u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
      u8g2.setFontDirection(0);
      u8g2.drawGlyph(54, 38, 0x003D);
    }while ( u8g2.nextPage() );
    delay(100);
    u8g2.firstPage();
    do{
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.setFontDirection(0);
      u8g2.drawStr(0,15,"wait.");
      u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
      u8g2.setFontDirection(3);
      u8g2.drawGlyph(75, 38, 0x003D);
    }while ( u8g2.nextPage() );
    u8g2.setFontDirection(0);
    u8g2.firstPage();
  while(true){
    u8g2.firstPage();
    do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(0,15,"long or short");
    u8g2.drawStr(5,35,"SW1 = short");
    u8g2.drawStr(5,55,"SW2 = long");
    if(digitalRead(SW1) == 0){
      testInshort();
    }else if(digitalRead(SW2) == 0){
      testInlong();
    }
  } while( u8g2.nextPage() );
  delay(1000);
  }
}


void testInshort(void){
  u8g2.setFontDirection(0);
  u8g2.firstPage();
do{
    u8g2.firstPage();
    adc0 = analogRead(ADC0);
    adc1 = analogRead(ADC1);
    adc2 = analogRead(ADC2);
    adc3 = analogRead(ADC3);
    adc4 = analogRead(ADC4);
    adc0 = adc0*4883/1000000;
    adc1 = adc1*4883/1000000;
    adc2 = adc2*4883/1000000;
    adc3 = adc3*4883/1000000;
    adc4 = adc4*4883/1000000;
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(45,7,"test I/O");
    u8g2.drawStr(5,17,"ADC0:");
    u8g2.setCursor(35, 17);
    u8g2.print(adc0);
    u8g2.drawStr(5,27,"ADC1:");
    u8g2.setCursor(35, 27);
    u8g2.print(adc1);
    u8g2.drawStr(5,37,"ADC2:");
    u8g2.setCursor(35, 37);
    u8g2.print(adc2);
    u8g2.drawStr(5,47,"ADC3:");
    u8g2.setCursor(35, 47);
    u8g2.print(adc3);
    u8g2.drawStr(5,57,"ADC4:");
    u8g2.setCursor(35, 57);
    u8g2.print(adc4);
  } while( u8g2.nextPage() );
  delay(1000);
}

void testInlong(void){
    moyadc0 = 0;
    moyadc1 = 0;
    moyadc2 = 0;
    moyadc3 = 0;
    moyadc4 = 0;
 for (int i = 1; i <= 11; i++) {
  u8g2.setFontDirection(0);
  u8g2.firstPage();
do{
    u8g2.firstPage();
    adc0 = analogRead(ADC0);
    adc1 = analogRead(ADC1);
    adc2 = analogRead(ADC2);
    adc3 = analogRead(ADC3);
    adc4 = analogRead(ADC4);
    adc0 = adc0*4883/1000000;
    adc1 = adc1*4883/1000000;
    adc2 = adc2*4883/1000000;
    adc3 = adc3*4883/1000000;
    adc4 = adc4*4883/1000000;
    moyadc0 += adc0;
    moyadc1 += adc1;
    moyadc2 += adc2;
    moyadc3 += adc3;
    moyadc4 += adc4;
    if(i<2){
      moyadc0 = moyadc0/i;
      moyadc1 = moyadc1/i;
      moyadc2 = moyadc2/i;
      moyadc3 = moyadc3/i;
      moyadc4 = moyadc4/i;
    }else if(i > 1){
      moyadc0 = moyadc0/divi;
      moyadc1 = moyadc1/divi;
      moyadc2 = moyadc2/divi;
      moyadc3 = moyadc3/divi;
      moyadc4 = moyadc4/divi;
    }

    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(45,7,"test I/O");
    u8g2.drawStr(5,17,"ADC0:");
    u8g2.setCursor(35, 17);
    u8g2.print(adc0);
    u8g2.setCursor(75, 17);
    u8g2.print(moyadc0);
    u8g2.drawStr(5,27,"ADC1:");
    u8g2.setCursor(35, 27);
    u8g2.print(adc1);
    u8g2.setCursor(75, 27);
    u8g2.print(moyadc1);
    u8g2.drawStr(5,37,"ADC2:");
    u8g2.setCursor(35, 37);
    u8g2.print(adc2);
    u8g2.setCursor(75, 37);
    u8g2.print(moyadc2);
    u8g2.drawStr(5,47,"ADC3:");
    u8g2.setCursor(35, 47);
    u8g2.print(adc3);
    u8g2.setCursor(75, 47);
    u8g2.print(moyadc3);
    u8g2.drawStr(5,57,"ADC4:");
    u8g2.setCursor(35, 57);
    u8g2.print(adc4);
    u8g2.setCursor(75, 57);
    u8g2.print(moyadc4);
  } while( u8g2.nextPage() );
  delay(100);
}
}
void testOutshort(void){
  
}

void testOutlong(void){
  
}
