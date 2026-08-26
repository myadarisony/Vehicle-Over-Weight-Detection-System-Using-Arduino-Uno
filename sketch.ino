#include <LiquidCrystal_I2C.h>
#include <HX711.h>
LiquidCrystal_I2C lcd(0X27,16,2);
const int RLED=4;
const int YLED=5;
const int GLED=6;
const int BUZZER=7;
const int LOADCELL_DOUT_PIN=2;
const int LOADCELL_SCK_PIN=3;
HX711 scale;
long reading;

void setup() {
  pinMode(RLED, OUTPUT);
  pinMode(YLED,OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  scale.begin(LOADCELL_DOUT_PIN,LOADCELL_SCK_PIN);
  scale.tare();
  scale.set_scale();
  

}

void loop() {
 digitalWrite(RLED, LOW);
 digitalWrite(YLED, LOW);
 digitalWrite(GLED, LOW);

 digitalWrite(BUZZER, LOW);
  
   if(scale.is_ready()){
  reading =scale.read();
  float weight = reading/420;
   Serial.print("reading:");
   Serial.println(weight);
    lcd.setCursor(0,1);
    lcd.print("weight: ");
    lcd.println(weight);

    
if(weight<15)
{
digitalWrite(GLED, HIGH);

  lcd.setCursor(0,0);
  lcd.print("NORMAL");

}
else if( weight <40)
{
digitalWrite(YLED, HIGH);
 
  lcd.setCursor(0,0);
  lcd.print("MEDIUM");

}
else if(weight > 41)
{
digitalWrite(RLED, HIGH);
digitalWrite(BUZZER, HIGH);
  lcd.setCursor(0,0);
  lcd.print("HIGH");
}
else{
 digitalWrite(RLED, LOW);
 digitalWrite(YLED, LOW);
 digitalWrite(GLED, LOW);
 digitalWrite(BUZZER, LOW);
}

}
delay(1000);
lcd.clear();
}