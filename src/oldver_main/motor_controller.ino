// ------------------- Control Motor -------------------
#define MOTORA_FORWARD(pwm)    do{analogWrite(DIRA1,pwm); analogWrite(DIRA2,0);}while(0)
#define MOTORA_STOP(x)         do{analogWrite(DIRA1,0); analogWrite(DIRA2,0);}while(0)
#define MOTORA_BACKOFF(pwm)    do{analogWrite(DIRA1,0);analogWrite(DIRA2,pwm); }while(0)

#define MOTORB_FORWARD(pwm)    do{analogWrite(DIRB1,pwm); analogWrite(DIRB2,0);}while(0)
#define MOTORB_STOP(x)         do{analogWrite(DIRB1,0); analogWrite(DIRB2,0);}while(0)
#define MOTORB_BACKOFF(pwm)    do{analogWrite(DIRB1,0);analogWrite(DIRB2,pwm); }while(0)

#define MOTORC_FORWARD(pwm)    do{analogWrite(DIRC1,pwm); analogWrite(DIRC2,0);}while(0)
#define MOTORC_STOP(x)         do{analogWrite(DIRC1,0); analogWrite(DIRC2,0);}while(0)
#define MOTORC_BACKOFF(pwm)    do{analogWrite(DIRC1,0);analogWrite(DIRC2,pwm); }while(0)

#define MOTORD_FORWARD(pwm)    do{analogWrite(DIRD1,pwm); analogWrite(DIRD2,0);}while(0)
#define MOTORD_STOP(x)         do{analogWrite(DIRD1,0); analogWrite(DIRD2,0);}while(0)
#define MOTORD_BACKOFF(pwm)    do{analogWrite(DIRD1,0);analogWrite(DIRD2,pwm); }while(0)
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
