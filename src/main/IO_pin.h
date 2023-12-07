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
#define DIRA1 0   // +
#define DIRA2 3  // -

#define DIRB1 4   // +
#define DIRB2 6  // -

#define DIRC1 2   // +
#define DIRC2 1  // -

#define DIRD1 7   // +
#define DIRD2 5  // -

byte pinOUT[4] = {DIRA1,DIRA2,DIRB1,DIRB2};
byte defaultSpeed = 140;
byte offSet = 10;

// byte direction;
// byte servo_y_axis;
// byte servo_degree;
// byte gripper;

// ------------------- Joy Pin -------------------
// Define Input Connections
#define CH1 A0
#define CH2 A1
#define CH3 A2
#define CH4 A3
#define CH5 A4
#define CH6 A5

int ch1Value,ch2Value,ch3Value,ch4Value,ch5Value;
// bool ch6Value;
int ch6Value;
#endif