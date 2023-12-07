#include <Adafruit_PWMServoDriver.h>
// #define DIRA1 0   // +
// #define DIRA2 3  // -
Adafruit_PWMServoDriver PWM = Adafruit_PWMServoDriver();

#define pwmWrite(pin,pwm) do{PWM.setPWM(pin, 0, map(pwm,0,255,0,4096));}while(0)

#define MOTORA_FORWARD(pwm)    do{pwmWrite(DIRA1,pwm); pwmWrite(DIRA2,0);}while(0)

void setup() {
    // pinMode(DIRA1,OUTPUT);
    // pinMode(DIRA2,OUTPUT);
}
void loop() {
    // MOTORA_FORWARD(100);
    PWM.setPWM(0, 0, map(0,0,255,0,4096));
    PWM.setPWM(1, 0, map(0,0,255,0,4096));
    PWM.setPWM(2, 0, map(0,0,255,0,4096));
    PWM.setPWM(3, 0, map(0,0,255,0,4096));
}