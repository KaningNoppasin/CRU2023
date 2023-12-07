#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver PWM = Adafruit_PWMServoDriver();

#define pwmWrite(pin,pwm) do{PWM.setPWM(pin, 0, map(pwm,0,255,0,4095));}while(0)

// ------------------- Control Motor -------------------
#define MOTORA_FORWARD(pwm)    do{pwmWrite(DIRA1,pwm); pwmWrite(DIRA2,0);}while(0)
#define MOTORA_STOP(x)         do{pwmWrite(DIRA1,0); pwmWrite(DIRA2,0);}while(0)
#define MOTORA_BACKOFF(pwm)    do{pwmWrite(DIRA1,0);pwmWrite(DIRA2,pwm); }while(0)

#define MOTORB_FORWARD(pwm)    do{pwmWrite(DIRB1,pwm); pwmWrite(DIRB2,0);}while(0)
#define MOTORB_STOP(x)         do{pwmWrite(DIRB1,0); pwmWrite(DIRB2,0);}while(0)
#define MOTORB_BACKOFF(pwm)    do{pwmWrite(DIRB1,0);pwmWrite(DIRB2,pwm); }while(0)

#define MOTORC_FORWARD(pwm)    do{pwmWrite(DIRC1,pwm); pwmWrite(DIRC2,0);}while(0)
#define MOTORC_STOP(x)         do{pwmWrite(DIRC1,0); pwmWrite(DIRC2,0);}while(0)
#define MOTORC_BACKOFF(pwm)    do{pwmWrite(DIRC1,0);pwmWrite(DIRC2,pwm); }while(0)

#define MOTORD_FORWARD(pwm)    do{pwmWrite(DIRD1,pwm); pwmWrite(DIRD2,0);}while(0)
#define MOTORD_STOP(x)         do{pwmWrite(DIRD1,0); pwmWrite(DIRD2,0);}while(0)
#define MOTORD_BACKOFF(pwm)    do{pwmWrite(DIRD1,0);pwmWrite(DIRD2,pwm); }while(0)
// -----------------------------------------------------

// ------------------- Define Function -------------------
//    ↑A-----B↑
//     |  ↑  |
//     |  |  |
//    ↑C-----D↑
#define FORWARD(pwm)    do{MOTORA_FORWARD(pwm);MOTORB_FORWARD(pwm);MOTORC_FORWARD(pwm);MOTORD_FORWARD(pwm); }while(0)

//    =A-----B=
//     |  =  |
//     |  =  |
//    =C-----D=
#define STOP(pwm)       do{MOTORA_STOP(pwm);MOTORB_STOP(pwm);MOTORC_STOP(pwm);MOTORD_STOP(pwm); }while(0)

//    ↓A-----B↓
//     |  |  |
//     |  ↓  |
//    ↓C-----D↓
#define BACKOFF(pwm)    do{MOTORA_BACKOFF(pwm);MOTORB_BACKOFF(pwm);MOTORC_BACKOFF(pwm);MOTORD_BACKOFF(pwm); }while(0)

//    =A-----B↑
//     |   ↖ |
//     | ↖   |
//    ↑C-----D=
#define LEFT_1(pwm)     do{MOTORA_FORWARD(pwm);MOTORB_STOP(pwm);MOTORC_STOP(pwm);MOTORD_FORWARD(pwm); }while(0)

//    ↓A-----B↑
//     |  ←  |
//     |  ←  |
//    ↑C-----D↓
#define LEFT_2(pwm)     do{MOTORA_BACKOFF(pwm);MOTORB_FORWARD(pwm);MOTORC_FORWARD(pwm);MOTORD_BACKOFF(pwm); }while(0)

//    ↓A-----B=
//     | ↙   |
//     |   ↙ |
//    =C-----D↓
#define LEFT_3(pwm)     do{MOTORA_BACKOFF(pwm);MOTORB_STOP(pwm);MOTORC_STOP(pwm);MOTORD_BACKOFF(pwm); }while(0)

//    ↑A-----B=
//     | ↗   |
//     |   ↗ |
//    =C-----D↑
#define RIGHT_1(pwm)    do{MOTORA_FORWARD(pwm);MOTORB_STOP(pwm);MOTORC_STOP(pwm);MOTORD_FORWARD(pwm); }while(0)

//    ↑A-----B↓
//     |  →  |
//     |  →  |
//    ↓C-----D↑
#define RIGHT_2(pwm)    do{MOTORA_FORWARD(pwm);MOTORB_BACKOFF(pwm);MOTORC_BACKOFF(pwm);MOTORD_FORWARD(pwm); }while(0)

//    =A-----B↓
//     |   ↘ |
//     | ↘   |
//    ↓C-----D=
#define RIGHT_3(pwm)    do{MOTORA_STOP(pwm);MOTORB_BACKOFF(pwm);MOTORC_BACKOFF(pwm);MOTORD_STOP(pwm); }while(0)
// ------------------------------------------------------
