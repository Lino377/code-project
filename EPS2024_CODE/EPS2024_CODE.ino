#include <Wire.h>
#include "define.h"
#include <U8g2lib.h>

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

void workinprogress(void){
  u8g2.setFontDirection(0);
  u8g2.firstPage();
do{
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(5,55,"work in progress");
  } while( u8g2.nextPage() );
  delay(1000);
}