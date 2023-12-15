/*

*    A-----B
*    |  |  |
*    |  |  |
*    A-----B

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

#define sensorPIN 4


byte pinOUT[2] = {DIRA1,DIRA2};
byte defaultSpeed = 40;     //50 forward =>ok
byte offSet = 50;

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