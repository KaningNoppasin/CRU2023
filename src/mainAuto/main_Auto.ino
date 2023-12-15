/*

    A-----B
    |  |  |
    |  |  |
    C-----D

*TODO => Test All Code  (Compleat??)
? last Edit 8/12/2023
? Edit By Noppasin Renruang Cpr.E KMUTNB BKK Thailand

*/
#include <Wire.h>
#include <Servo.h>
#include "IO_pin.h"
#include "motor_controller.h"
#include "servo_controller.h"

// void setup() {}
// void loop() {}


Servo servoA;
Servo servoB;
Servo servoC;


void setup()
{
    Serial.begin(115200);
    servoA.attach(SERVO_A_PIN);
    servoB.attach(SERVO_B_PIN);
    servoC.attach(SERVO_C_PIN);
    for(int i = 0;i<2;i++){pinMode(pinOUT[i],OUTPUT);}
}

void loop()
{
    if(annalogRead(sensor) > 400){
        
    }
}