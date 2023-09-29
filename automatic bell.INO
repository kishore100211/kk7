#include "RTClib.h"
#include <Wire.h>
#include <LiquidCrystal.h>

const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
RTC_DS3231 rtc;

void PrintTwoDigits();
void showTime();
void showDate();
void setup () {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  lcd.begin(16,2);

if (! rtc.begin()) {
  
    Serial.println("Couldn't find RTC");
    Serial.flush();
    abort();
  }
   if (! rtc.lostPower())
   
    Serial.println("RTC is NOT running, let's set the time!");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    
  }
  void loop ()
 {
    DateTime now = rtc.now();
    showTime();
    showDate();
    if(now.hour()== 10 && now.minute()==00&& now.second()==00
    ||now.hour()==10 && now.minute()==00 && now.second()==10){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

    if(now.hour() == 10 && now.minute() == 15&& now.second()== 00
    || now.hour() == 10&& now.minute() == 15 && now.second () == 10){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

    if(now.hour() == 11 && now.minute() == 10 && now.second()== 00
    || now.hour() == 11 && now.minute() == 10 && now.second () == 10){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

    if(now.hour() == 12 && now.minute() == 00 && now.second()== 00
    || now.hour() == 12 && now.minute() == 00 && now.second () == 10){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

    if(now.hour() == 13 && now.minute() == 32 && now.second()== 00
    || now.hour() == 13 && now.minute() == 32 && now.second () == 10){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

    if(now.hour() == 13 && now.minute() == 41 && now.second()== 00
    || now.hour() == 13 && now.minute() == 41 && now.second () == 10){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

    if(now.hour() == 14 && now.minute() == 20 && now.second()== 00
    || now.hour() == 14 && now.minute() == 20 && now.second () == 10){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

    if(now.hour() == 15 && now.minute() == 10 && now.second()== 00
    || now.hour() == 15 && now.minute() == 10  && now.second () == 5){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

    if(now.hour() == 15 && now.minute() == 30 && now.second()== 00
    || now.hour() == 15 && now.minute() == 30 && now.second () == 10){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

    if(now.hour() == 16 && now.minute() == 15 && now.second()== 00
    || now.hour() == 16 && now.minute() == 15 && now.second () == 10){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

    if(now.hour() == 17 && now.minute() == 00 && now.second()== 00
    || now.hour() == 17  && now.minute() == 00 && now.second () == 10){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("BELL RING");
      digitalWrite(11,HIGH); 
      delay(5000);
      digitalWrite(11,LOW);
      lcd.clear();
    }

 }

 void PrintTwoDigits(int number){
  if(number<10){
    lcd.print("0");  
  }
  lcd.print(number);
}

void showTime(){
    DateTime now = rtc.now();
    lcd.setCursor(0,0);
    lcd.print("Time:");
    lcd.setCursor(5,0);
    PrintTwoDigits(now.hour());
    lcd.print(':');
    PrintTwoDigits(now.minute());
    lcd.print(':');
    PrintTwoDigits(now.second());}
    
void showDate(){
    DateTime now = rtc.now();
    lcd.setCursor(0,1);
    lcd.print("Date:");
    lcd.setCursor(5,1);
    PrintTwoDigits(now.day());
    lcd.print(':');
    PrintTwoDigits(now.month());
    lcd.print(':');
    PrintTwoDigits(now.year());
}
