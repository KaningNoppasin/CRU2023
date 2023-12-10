/*

*    A-----B
*    |  |  |
*    |  |  |
*    C-----D

*/
#ifndef IOFILE
#define IOFILE
// ------------------- Motor Pin -------------------
// Define Output Connections
// 0 1 2 3 4 5 6 7
#define DIRA1 11   // +
#define DIRA2 10  // -

#define DIRB1 5   // +
#define DIRB2 4  // -

#define DIRC1 9   // +
#define DIRC2 8  // -

#define DIRD1 7   // +
#define DIRD2 6  // -

byte pinOUT[4] = {DIRA1,DIRA2,DIRB1,DIRB2};
byte defaultSpeed = 140;
byte offSet = 10;

// byte direction;
// byte servo_y_axis;
// byte servo_degree;
// byte gripper;

// ------------------- Joy Pin -------------------
// Define Input Connections
#define CH1 3
#define CH2 5
#define CH3 A2
#define CH4 A0
#define CH5 A3
#define CH6 A1

int ch1Value,ch2Value,ch3Value,ch4Value,ch5Value;
// bool ch6Value;
int ch6Value;

/*
A => Gripper    B => turn 0 90 180 degree   C => up down

    ====|       |
        |A====B |   C
    ====|       |

*/

#define SERVO_A_PIN 8
#define SERVO_B_PIN 7
#define SERVO_C_PIN 6

#endif