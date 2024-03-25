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
    u8g2.drawStr(0,35,"SW1 = guess(test)");
    u8g2.drawStr(0,55,"SW2 = work in progress");
    if(digitalRead(SW1) == 0){
      menu();
    }else if(digitalRead(SW2) == 0){
      workinprogress();
    }
    //attachInterrupt(digitalPinToInterrupt(SW1), guess1, FALLING); 
    //attachInterrupt(digitalPinToInterrupt(SW2), guess2, FALLING); 
  } while( u8g2.nextPage() );
  delay(1000);
}



void menu(void){
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

void testshort(void){
  while(1){
  u8g2.setFontDirection(0);
  u8g2.firstPage();
do{
    u8g2.firstPage();
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(5,15,"test I/O");
    u8g2.drawStr(5,35,"SW1 = test input");
    u8g2.drawStr(5,55,"SW2 = test output");
    if(digitalRead(SW1) == 0){
      testIn();
    }else if(digitalRead(SW2) == 0){
      testOut();
    }
  } while( u8g2.nextPage() );
  delay(1000);
}
}

void testlong(void){
  while(1){
  u8g2.setFontDirection(0);
  u8g2.firstPage();
do{
    u8g2.firstPage();
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(5,15,"test I/O");
    u8g2.drawStr(5,35,"SW1 = test input-L");
    u8g2.drawStr(5,55,"SW2 = test output-L");
    if(digitalRead(SW1) == 0){
      testInlong();
    }else if(digitalRead(SW2) == 0){
      testOutlong();
    }
  } while( u8g2.nextPage() );
  delay(1000);
}
}

void workinprogress(void){
  while(1){
  u8g2.setFontDirection(0);
  u8g2.firstPage();
do{
    u8g2.firstPage();
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(5,15,"test I/O");
    u8g2.drawStr(5,35,"SW1 = test short");
    u8g2.drawStr(5,55,"SW2 = test long");
    if(digitalRead(SW1) == 0){
      testshort();
    }else if(digitalRead(SW2) == 0){
      testInlong();
    }
  } while( u8g2.nextPage() );
  delay(1000);
}
}

void testIn(void){
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
    /*u8g2.drawStr(5,55,"SW2 = test output");
    if(digitalRead(SW1) == 0){
      testIn();
    }else if(digitalRead(SW2) == 0){
      testOut();
    }*/
  } while( u8g2.nextPage() );
  delay(1000);
}

void testInlong(void){
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
  delay(250);
}

void testOut(void){
  
}

void testOutlong(void){
  
}
