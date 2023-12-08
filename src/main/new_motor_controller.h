#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver PWM = Adafruit_PWMServoDriver();

#define pwmWrite(pin,pwm) do{PWM.setPWM(pin, 0, map(pwm,0,255,0,4095));}while(0)

class MotorController {
private:
    byte DIR1;
    byte DIR2;
public:
    // Constructor
    MotorController(byte IN1,byte IN2) {
        byte DIR1 = IN1;
        byte DIR2 = IN2;
    }
    void MOTOR_FORWARD(pwm) {pwmWrite(DIR1,pwm); pwmWrite(DIR2,0);}
    void MOTOR_STOP(pwm)    {pwmWrite(DIR1,pwm); pwmWrite(DIR2,0);}
    void MOTOR_BACKOFF(pwm) {pwmWrite(DIR1,pwm); pwmWrite(DIR2,0);}
};

// ------------------- Create Motor Object -------------------
MotorController MotorA (DIRA1,DIRA2);
MotorController MotorB (DIRB1,DIRB2);
MotorController MotorC (DIRC1,DIRC2);
MotorController MotorD (DIRD1,DIRD2);
// -----------------------------------------------------

// ------------------- Define Function -------------------
//    ↑A-----B↑
//     |  ↑  |
//     |  |  |
//    ↑C-----D↑
#define FORWARD(pwm)    do{MotorA.MOTOR_FORWARD(pwm);MotorB.MOTOR_FORWARD(pwm);MotorC.MOTOR_FORWARD(pwm);MotorD.MOTOR_FORWARD(pwm); }while(0)

//    =A-----B=
//     |  =  |
//     |  =  |
//    =C-----D=
#define STOP(pwm)       do{MotorA.MOTOR_STOP(pwm);MotorB.MOTOR_STOP(pwm);MotorC.MOTOR_STOP(pwm);MotorD.MOTOR_STOP(pwm); }while(0)

//    ↓A-----B↓
//     |  |  |
//     |  ↓  |
//    ↓C-----D↓
#define BACKOFF(pwm)    do{MotorA.MOTOR_BACKOFF(pwm);MotorB.MOTOR_BACKOFF(pwm);MotorC.MOTOR_BACKOFF(pwm);MotorD.MOTOR_BACKOFF(pwm); }while(0)

//    =A-----B↑
//     |   ↖ |
//     | ↖   |
//    ↑C-----D=
#define LEFT_1(pwm)     do{MotorA.MOTOR_FORWARD(pwm);MotorB.MOTOR_STOP(pwm);MotorC.MOTOR_STOP(pwm);MotorD.MOTOR_FORWARD(pwm); }while(0)

//    ↓A-----B↑
//     |  ←  |
//     |  ←  |
//    ↑C-----D↓
#define LEFT_2(pwm)     do{MotorA.MOTOR_BACKOFF(pwm);MotorB.MOTOR_FORWARD(pwm);MotorC.MOTOR_FORWARD(pwm);MotorD.MOTOR_BACKOFF(pwm); }while(0)

//    ↓A-----B=
//     | ↙   |
//     |   ↙ |
//    =C-----D↓
#define LEFT_3(pwm)     do{MotorA.MOTOR_BACKOFF(pwm);MotorB.MOTOR_STOP(pwm);MotorC.MOTOR_STOP(pwm);MotorD.MOTOR_BACKOFF(pwm); }while(0)

//    ↑A-----B=
//     | ↗   |
//     |   ↗ |
//    =C-----D↑
#define RIGHT_1(pwm)    do{MotorA.MOTOR_FORWARD(pwm);MotorB.MOTOR_STOP(pwm);MotorC.MOTOR_STOP(pwm);MotorD.MOTOR_FORWARD(pwm); }while(0)

//    ↑A-----B↓
//     |  →  |
//     |  →  |
//    ↓C-----D↑
#define RIGHT_2(pwm)    do{MotorA.MOTOR_FORWARD(pwm);MotorB.MOTOR_BACKOFF(pwm);MotorC.MOTOR_BACKOFF(pwm);MotorD.MOTOR_FORWARD(pwm); }while(0)

//    =A-----B↓
//     |   ↘ |
//     | ↘   |
//    ↓C-----D=
#define RIGHT_3(pwm)    do{MotorA.MOTOR_STOP(pwm);MotorB.MOTOR_BACKOFF(pwm);MotorC.MOTOR_BACKOFF(pwm);MotorD.MOTOR_STOP(pwm); }while(0)
// ------------------------------------------------------
