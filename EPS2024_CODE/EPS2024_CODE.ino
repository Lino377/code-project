#include <Wire.h>
#include "define.h"
#include <U8g2lib.h>

void loop() {
  u8g2.setFontDirection(0);
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(0, 15, "main menu");
    u8g2.drawStr(0, 35, "SW1 = test input");
    u8g2.drawStr(0, 55, "SW2 = test output");
    if (digitalRead(SW1) == 0) {
      testIn();  //test input
    } else if (digitalRead(SW2) == 0) {
      testOut();  //test output
    }
  } while (u8g2.nextPage());
  delay(1000);
}


void testOut(void) {
  //waiting
  u8g2.setFontDirection(0);
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0, 15, "wait");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0030);
  } while (u8g2.nextPage());
  delay(100);
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0, 15, "wait.");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0031);
  } while (u8g2.nextPage());
  delay(100);
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0, 15, "wait..");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0032);
  } while (u8g2.nextPage());
  delay(100);
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0, 15, "wait...");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0033);
  } while (u8g2.nextPage());
  delay(100);
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0, 15, "wait.");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0034);
  } while (u8g2.nextPage());
  delay(100);
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0, 15, "wait..");
    u8g2.setFont(u8g2_font_battery19_tn);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 38, 0x0035);
  } while (u8g2.nextPage());
  u8g2.firstPage();
  while (true) {
    u8g2.setFontDirection(0);
    u8g2.firstPage();
    do {
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.drawStr(0, 15, "saturation or cut-off");
      u8g2.drawStr(5, 35, "SW1 = saturation");
      u8g2.drawStr(5, 55, "SW2 = cut-off");
      if (digitalRead(SW1) == 0) {
        testOutsat();  //test for the transitor sat
      } else if (digitalRead(SW2) == 0) {
        testOutcut();  //test for the transitor state cut
      }
    } while (u8g2.nextPage());
    delay(1000);
  }
}



void testIn(void) {
  //waiting
  u8g2.setFontDirection(0);
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0, 15, "wait");
    u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
    u8g2.setFontDirection(0);
    u8g2.drawGlyph(54, 38, 0x003D);
  } while (u8g2.nextPage());
  delay(100);
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0, 15, "wait.");
    u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
    u8g2.setFontDirection(1);
    u8g2.drawGlyph(54, 17, 0x003D);
  } while (u8g2.nextPage());
  delay(100);
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0, 15, "wait..");
    u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
    u8g2.setFontDirection(0);
    u8g2.drawGlyph(54, 38, 0x003D);
  } while (u8g2.nextPage());
  delay(100);
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.setFontDirection(0);
    u8g2.drawStr(0, 15, "wait.");
    u8g2.setFont(u8g2_font_streamline_interface_essential_loading_t);
    u8g2.setFontDirection(3);
    u8g2.drawGlyph(75, 38, 0x003D);
  } while (u8g2.nextPage());
  u8g2.setFontDirection(0);
  u8g2.firstPage();
  while (true) {
    u8g2.firstPage();
    do {
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.drawStr(0, 15, "long or short");
      u8g2.drawStr(5, 35, "SW1 = short");
      u8g2.drawStr(5, 55, "SW2 = long");
      if (digitalRead(SW1) == 0) {
        testInshort();  //one test only
      } else if (digitalRead(SW2) == 0) {
        testInlong();  //long test with a avreage
      }
    } while (u8g2.nextPage());
    delay(1000);
  }
}


void testInshort(void) {
  u8g2.setFontDirection(0);
  u8g2.firstPage();
  do {
    u8g2.firstPage();
    adc0 = analogRead(ADC0);       // read the data form the CAN 0
    adc1 = analogRead(ADC1);       // read the data form the CAN 1
    adc2 = analogRead(ADC2);       // read the data form the CAN 2
    adc3 = analogRead(ADC3);       // read the data form the CAN 3
    adc4 = analogRead(ADC4);       // read the data form the CAN 4
    adc0 = adc0 * 4888 / 1000000;  // convert the value of the adc to 0-5V
    adc1 = adc1 * 4888 / 1000000;  // convert the value of the adc to 0-5V
    adc2 = adc2 * 4888 / 1000000;  // convert the value of the adc to 0-5V
    adc3 = adc3 * 4888 / 1000000;  // convert the value of the adc to 0-5V
    adc4 = adc4 * 4888 / 1000000;  // convert the value of the adc to 0-5V
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(45, 7, "test I/O");
    u8g2.drawStr(5, 17, "ADC0:");
    u8g2.setCursor(35, 17);
    u8g2.print(adc0);
    u8g2.drawStr(5, 27, "ADC1:");
    u8g2.setCursor(35, 27);
    u8g2.print(adc1);
    u8g2.drawStr(5, 37, "ADC2:");
    u8g2.setCursor(35, 37);
    u8g2.print(adc2);
    u8g2.drawStr(5, 47, "ADC3:");
    u8g2.setCursor(35, 47);
    u8g2.print(adc3);
    u8g2.drawStr(5, 57, "ADC4:");
    u8g2.setCursor(35, 57);
    u8g2.print(adc4);
  } while (u8g2.nextPage());
  delay(1000);
}

void testInlong(void) {
  sum0 = 0;
  sum1 = 0;
  sum2 = 0;
  sum3 = 0;
  sum4 = 0;
  for (int i = 1; i <= 11; i++) {
    u8g2.setFontDirection(0);
    u8g2.firstPage();
    do {
      u8g2.firstPage();
      adc0 = analogRead(ADC0);
      adc1 = analogRead(ADC1);
      adc2 = analogRead(ADC2);
      adc3 = analogRead(ADC3);
      adc4 = analogRead(ADC4);
      adc0 = adc0 * 4888 / 1000000;// convert the value of the adc to 0-5V
      adc1 = adc1 * 4888 / 1000000;// convert the value of the adc to 0-5V
      adc2 = adc2 * 4888 / 1000000;// convert the value of the adc to 0-5V
      adc3 = adc3 * 4888 / 1000000;// convert the value of the adc to 0-5V
      adc4 = adc4 * 4888 / 1000000;// convert the value of the adc to 0-5V
      sum0 += adc0;
      sum1 += adc1;
      sum2 += adc2;
      sum3 += adc3;
      sum4 += adc4;
      moyadc0 = sum0;
      moyadc1 = sum1;
      moyadc2 = sum2;
      moyadc3 = sum3;
      moyadc4 = sum4;
      moyadc0 = moyadc0/i;
      moyadc1 = moyadc1/i;
      moyadc2 = moyadc2/i;
      moyadc3 = moyadc3/i;
      moyadc4 = moyadc4/i;
      u8g2.setFont(u8g2_font_mozart_nbp_tr);
      u8g2.drawStr(45, 7, "test I/O");
      u8g2.drawStr(5, 17, "ADC0:");
      u8g2.setCursor(35, 17);
      u8g2.print(adc0);
      u8g2.setCursor(75, 17);
      u8g2.print(moyadc0);
      u8g2.drawStr(5, 27, "ADC1:");
      u8g2.setCursor(35, 27);
      u8g2.print(adc1);
      u8g2.setCursor(75, 27);
      u8g2.print(moyadc1);
      u8g2.drawStr(5, 37, "ADC2:");
      u8g2.setCursor(35, 37);
      u8g2.print(adc2);
      u8g2.setCursor(75, 37);
      u8g2.print(moyadc2);
      u8g2.drawStr(5, 47, "ADC3:");
      u8g2.setCursor(35, 47);
      u8g2.print(adc3);
      u8g2.setCursor(75, 47);
      u8g2.print(moyadc3);
      u8g2.drawStr(5, 57, "ADC4:");
      u8g2.setCursor(35, 57);
      u8g2.print(adc4);
      u8g2.setCursor(75, 57);
      u8g2.print(moyadc4);
    } while (u8g2.nextPage());
    delay(100);
  }

}

void testOutsat(void) {
  Wire.beginTransmission(MCP23017);  //0x20
  Wire.write(0x13);                  //set MCP23017 memory pointer to GPIOB address
  Wire.write(0x00);                  //all the base are at 0 all transitor are on saturation state
  Wire.endTransmission();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(15, 15, "the transisor is now");
    u8g2.drawStr(15, 25, "in saturation state");
  } while (u8g2.nextPage());
  delay(1000);
}


void testOutcut(void) {
  Wire.beginTransmission(MCP23017);
  Wire.write(0x13);  // set MCP23017 memory pointer to GPIOB address
  Wire.write(0xFF);  // all the base are at 1 all transitor are on cut off state
  Wire.endTransmission();
  do {
    u8g2.setFont(u8g2_font_mozart_nbp_tr);
    u8g2.drawStr(15, 15, "the transisor is now");
    u8g2.drawStr(15, 25, "in cut-off state");
  } while (u8g2.nextPage());
  delay(1000);
}
