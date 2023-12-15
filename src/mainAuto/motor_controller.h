// ------------------- Control Motor -------------------
#define MOTORA_FORWARD(pwm)    do{digitalWrite(DIRA1,1); digitalWrite(DIRA2,0);analogWrite(ENA,pwm);}while(0)
#define MOTORA_STOP(x)         do{digitalWrite(DIRA1,0); digitalWrite(DIRA2,0);analogWrite(ENA,pwm);}while(0)
#define MOTORA_BACKOFF(pwm)    do{digitalWrite(DIRA1,0);digitalWrite(DIRA2,1);analogWrite(ENA,pwm); }while(0)

#define MOTORB_FORWARD(pwm)    do{digitalWrite(DIRB1,1); digitalWrite(DIRB2,0);analogWrite(ENB,pwm);}while(0)
#define MOTORB_STOP(x)         do{digitalWrite(DIRB1,0); digitalWrite(DIRB2,0);analogWrite(ENB,pwm);}while(0)
#define MOTORB_BACKOFF(pwm)    do{digitalWrite(DIRB1,0);digitalWrite(DIRB2,1);analogWrite(ENB,pwm); }while(0)


// -----------------------------------------------------

// ------------------- Define Function -------------------
//    ↑A-----B↑
//     |  ↑  |
//     |  |  |
//    ↑C-----D↑
#define FORWARD(pwm)    do{MOTORA_FORWARD(pwm);MOTORB_FORWARD(pwm); }while(0)

//    =A-----B=
//     |  =  |
//     |  =  |
//    =C-----D=
#define STOP(pwm)       do{MOTORA_STOP(pwm);MOTORB_STOP(pwm); }while(0)

//    ↓A-----B↓
//     |  |  |
//     |  ↓  |
//    ↓C-----D↓
#define BACKOFF(pwm)    do{MOTORA_BACKOFF(pwm);MOTORB_BACKOFF(pwm); }while(0)

//    =A-----B↑
//     |   ↖ |
//     | ↖   |
//    ↑C-----D=
// #define LEFT_1(pwm)     do{MOTORA_FORWARD(pwm);MOTORB_STOP(pwm);MOTORC_STOP(pwm);MOTORD_FORWARD(pwm); }while(0)

//    ↑A-----B=
//     | ↗   |
//     |   ↗ |
//    =C-----D↑
// #define RIGHT_1(pwm)    do{MOTORA_FORWARD(pwm);MOTORB_STOP(pwm);MOTORC_STOP(pwm);MOTORD_FORWARD(pwm); }while(0)

// ------------------------------------------------------
