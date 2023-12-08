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
    // for(int i = 0;i<4;i++){pinMode(pinOUT[i],OUTPUT);}
    for(int i = 0;i<8;i++){PWM.setPWM(i, 0, map(0,0,255,0,4095));}
}

void loop()
{
    testJoy();
    // testMotor
    // pwmWrite as same as analogWrite
    // pwmWrite(pin,pwm);
    pwmWrite(0,100);
    pwmWrite(1,100);
    pwmWrite(2,100);
    pwmWrite(3,100);
    pwmWrite(4,100);


    // JOY joyValue = getValueFromJOY();
    // Serial.println(joyValue);
    // switch (joyValue.direction) {
    //     case 1:FORWARD(defaultSpeed);break;
    //     case 2:BACKOFF(defaultSpeed);break;
    //     case 3:RIGHT_2(defaultSpeed);break;
    //     case 4:LEFT_2(defaultSpeed);break;
    //     case 5:STOP(defaultSpeed);break;
    //     default:STOP(defaultSpeed);break;
    // }
    // switch (joyValue.servo_y_axis) {
    //     case 1:SERVOC_CONTROL(90);break;
    //     case 2:SERVOC_CONTROL(0);break;
    //     default:break;
    //     }
    // switch (joyValue.servo_degree) {
    //     case 1:SERVOB_CONTROL(0);break;
    //     case 2:SERVOB_CONTROL(90);break;
    //     case 3:SERVOB_CONTROL(180);break;
    //     default:break;
    //     }
    // switch (joyValue.gripper) {
    //     case 1:SERVOA_CONTROL(90);break;
    //     case 2:SERVOA_CONTROL(0);break;
    //     default:break;
    //     }
}