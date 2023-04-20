#include <Servo.h>
#define pulsador1 3
#define pulsador2 5
#define pulsador3 6
#define pulsador4 9
#define pulsador5 10
#define buzzer 8
int lectura;
int angulo=0;
int estado1;
int estado2;
int estado3;
int estado4;
int estado5;

#define OutPin(pulsador1) pinMode(pulsador1,INPUT)
#define OutPin(pulsador2) pinMode(pulsador2, INPUT)
#define OutPin(pulsador3) pinMode(pulsador3, INPUT)
#define OutPin(pulsador4) pinMode(pulsador4, INPUT)
#define OutPin(pulsador5) pinMode(pulsador5, INPUT)
Servo servoMotor;

void setup()
{
servoMotor.attach(11);
servoMotor.write(angulo);
OutPin(pulsador1);
OutPin(pulsador2); 
OutPin(pulsador3);
OutPin(pulsador4);
OutPin(pulsador5);
}

void loop()
{
 
estado2 = digitalRead(pulsador2);
estado3 = digitalRead(pulsador3);
estado4 = digitalRead(pulsador4);
estado5 = digitalRead(pulsador5);
 

  if(estado1 == 0){
  servoMotor.write(0);
    delay(1000);
  
  }
  
  if(estado2== 0){
  servoMotor.write(45);
    delay(1000);}
 
  if(estado3 == 0){
  servoMotor.write(90);
    delay(1000);}
  
  if(estado4 == 0){
  servoMotor.write(135);
    delay(1000);}
  
  if(estado5 == 0){
  servoMotor.write(180);
    delay(1000);
  tone(8,15000);
   delay(1000);
    noTone(8);}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
  
  
      }

