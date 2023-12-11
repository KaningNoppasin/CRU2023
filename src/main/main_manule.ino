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
#include <Adafruit_PWMServoDriver.h>
#include "joy_function.h"
#include "IO_pin.h"
#include "motor_controller.h"
#include "servo_controller.h"

// void setup() {}
// void loop() {}
void setup()
{
    Serial.begin(115200);
    PWM.begin();
    PWM.setPWMFreq(60);
    servoA.attach(SERVO_A_PIN);
    servoB.attach(SERVO_B_PIN);
    servoC.attach(SERVO_C_PIN);

    SERVOA_CONTROL(positionA);
    SERVOB_CONTROL(positionB);
    SERVOC_CONTROL(positionC);
    // for(int i = 0;i<4;i++){pinMode(pinOUT[i],OUTPUT);}
    for(int i = 4;i<12;i++){PWM.setPWM(i, 0, map(0,0,255,0,4095));}
}

void loop()
{
    JOY joyValue = getValueFromJOY();
    switch (joyValue.direction) {
        case 1:FORWARD(defaultSpeed);break;
        case 2:BACKOFF(defaultSpeed);break;
        case 3:RIGHT_2(defaultSpeed);break;
        case 4:LEFT_2(defaultSpeed);break;
        case 5:STOP(defaultSpeed);break;
        default:STOP(defaultSpeed);break;
    }
    switch (joyValue.gripper) {
        case 1:servoA.write(160);break;
        case 2:servoA.write(0);break;
        default:break;
        }
    switch (joyValue.servo_degree) {
        case 1:servoB.write(20);break;
        case 2:servoB.write(90);break;
        case 3:servoB.write(170);break;
        default:break;
        }
    switch (joyValue.servo_y_axis) {
        case 1:servoC.write(0);break;
        case 2:servoC.write(70);break;
        default:break;
        }
}