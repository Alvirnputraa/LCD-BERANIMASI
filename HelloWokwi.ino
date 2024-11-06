#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

String line1 = "ALVI AL VIRANA";
String line2 = "PUTRA";

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() {
  
  lcd.setCursor(1, 0); 
  for (int i = 0; i < line1.length(); i++) {
    lcd.print(line1[i]);
    delay(150); 
  }
  
  delay(500);
  
  lcd.setCursor(5, 1); 
  for (int i = 0; i < line2.length(); i++) {
    lcd.print(line2[i]);
    delay(150);
  }
  
  delay(2000);
  
  for (int i = line2.length() - 1; i >= 0; i--) {
    lcd.setCursor(i + 5, 1); 
    lcd.print(" "); 
    delay(150);
  }
  
  for (int i = line1.length() - 1; i >= 0; i--) {
    lcd.setCursor(i + 1, 0); 
    lcd.print(" "); 
    delay(150);
  }

  delay(500);
}


