/*
A => Gripper    B => turn 0 90 180 degree   C => up down

    ====|       |
        |A====B |   C
    ====|       |

*/

#include <Servo.h>
Servo servoA;
Servo servoB;
Servo servoC;

byte positionA = 0;
byte positionB = 0;
byte positionC = 0;

int step;

// servoA.attach(9);
// servoB.attach(9);
// servoC.attach(9);

// position => Start    degree => stop
byte servoController(Servo servo,byte start,byte stop = 0,int dl = 5){
    step = start > stop ? -1 : 1;
    switch (step) {
        case 1:for(byte pos = start;pos <= stop; pos += step){servo.write(pos);delay(dl);}break;
        case -1:for(byte pos = start;pos >= stop; pos += step){servo.write(pos);delay(dl);}break;
        default:break;
    }
    return stop;
}

#define SERVOA_CONTROL(degree)    do{positionA = servoController(servoA,positionA,degree);}while(0)
#define SERVOB_CONTROL(degree)    do{positionB = servoController(servoB,positionB,degree);}while(0)
#define SERVOC_CONTROL(degree)    do{positionC = servoController(servoC,positionC,degree);}while(0)