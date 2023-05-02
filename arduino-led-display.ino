// C++ code

//incluindo biblioteca do led i2c
#include <Adafruit_LiquidCrystal.h>
#include <Wire.h>

 //endereço I2C - 0x27, 16 column and 2 rows
Adafruit_LiquidCrystal lcd_1(0);

//carros 1
int pin13 = 13;
int pin12 = 12;
int pin11 = 11;

//pedestre 1
int pin10 = 10;
int pin9 = 9;

//carros 2
int pin7 = 7;
int pin6 = 6;
int pin5 = 5;

//pedestre 2
int pin4 = 4;
int pin3 = 3;

//declaração de OUTPUT e LCD
void setup(){
  
  //ligar LCD
  lcd_1.begin(16,2);
 
  
  //carros 1
  pinMode (pin13, OUTPUT);
  pinMode (pin12, OUTPUT);
  pinMode (pin11, OUTPUT);
  
  //pedestre 1
  pinMode (pin10, OUTPUT);
  pinMode (pin9, OUTPUT);
  
  //carros 2
  pinMode (pin7, OUTPUT);
  pinMode (pin6, OUTPUT);
  pinMode (pin5, OUTPUT);
  
  //pedestre 2
  pinMode (pin4, OUTPUT);
  pinMode (pin3, OUTPUT);
  
}
  
//declaração de LOOP
void loop (){
  
  //carros 1
  digitalWrite (pin13, LOW);
  digitalWrite (pin12, LOW);
  digitalWrite (pin11, HIGH);
  
  //pedestre 1
  digitalWrite (pin10, HIGH);
  digitalWrite (pin9, LOW);
  
  //carros 2
  digitalWrite (pin7, LOW);
  digitalWrite (pin6, HIGH);
  digitalWrite (pin5, LOW);
  
  //pedestre 2
  digitalWrite (pin4, LOW);
  digitalWrite (pin3, HIGH);
  
  //LCD
  lcd_1.setCursor(0,0);
  lcd_1.print("1V  A  Rx Vx R ");
  lcd_1.setCursor(0,1);
  lcd_1.print("2V  Ax R  V  Rx");
   
  //3 segundos
  delay (3000);
  
  //apaga vermelho e acende verde c1 
  digitalWrite (pin13, HIGH);
  digitalWrite (pin12, LOW);
  digitalWrite (pin11, LOW);
  
  //apaga amarelo e acende vermelho c2
  digitalWrite (pin7, LOW);
  digitalWrite (pin6, LOW);
  digitalWrite (pin5, HIGH);
  
  //apaga verde e acende vermelho p1
  digitalWrite (pin10, LOW);
  digitalWrite (pin9, HIGH);
  
  //apaga vermelho e acende verde p2
  digitalWrite (pin4, HIGH);
  digitalWrite (pin3, LOW);
  
  //LCD
  lcd_1.setCursor(0,0);
  lcd_1.print("1Vx A  R  V  Rx");
  lcd_1.setCursor(0,1);
  lcd_1.print("2V  A  Rx Vx R ");
  
  //3 segundos
  delay (3000);
  
  //apaga verde e acende amarelo c1
  digitalWrite (pin13, LOW);
  digitalWrite (pin12, HIGH);
  digitalWrite (pin11, LOW);
  
   //mantem c2
  digitalWrite (pin7, LOW);
  digitalWrite (pin6, LOW);
  digitalWrite (pin5, HIGH);
  
  //mantem p1
  digitalWrite (pin10, LOW);
  digitalWrite (pin9, HIGH);
  
  //mantem p2
  digitalWrite (pin4, HIGH);
  digitalWrite (pin3, LOW);
  
  //LCD
  lcd_1.setCursor(0,0);
  lcd_1.print("1V  Ax R  V  Rx");
  lcd_1.setCursor(0,1);
  lcd_1.print("2V  A  Rx Vx R ");
  
  //3 segundos
  delay (3000);
  
  //apaga amarelo e acende vermelho c1
  digitalWrite (pin13, LOW);
  digitalWrite (pin12, LOW);
  digitalWrite (pin11, HIGH);
  
  //apaga vermelho e acende verde c2
  digitalWrite (pin7, HIGH);
  digitalWrite (pin6, LOW);
  digitalWrite (pin5, LOW);
  
  //apaga vermelho e acende verde p1
  digitalWrite (pin10, HIGH);
  digitalWrite (pin9, LOW);
  
  //apaga verde e acende vermelho p2
  digitalWrite (pin4, LOW);
  digitalWrite (pin3, HIGH);
  
  //LCD
  lcd_1.setCursor(0,0);
  lcd_1.print("1V  A  Rx Vx R ");
  lcd_1.setCursor(0,1);
  lcd_1.print("2Vx A  R  V  Rx");
  
  //3 segundos
  delay (3000);
  
}