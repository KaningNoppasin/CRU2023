/*

*    A-----B
*    |  |  |
*    |  |  |
*    C-----D

*/

// ------------------- Motor Pin -------------------
// Define Output Connections
#define DIRA1 9   // +
#define DIRA2 6  // -

#define DIRB1 11   // +
#define DIRB2 10  // -

#define DIRC1 11   // +
#define DIRC2 10  // -

#define DIRD1 11   // +
#define DIRD2 10  // -

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
bool ch6Value;