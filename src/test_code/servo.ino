// * Sweep
//  by BARRAGAN <http://barraganstudio.com>
//  This example code is in the public domain.

//  modified 8 Nov 2013
//  by Scott Fitzgerald
//  https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
// */
#include <Adafruit_I2CDevice.h>
#include <Servo.h>

#define SERVO_A_PIN 8
#define SERVO_B_PIN 7
#define SERVO_C_PIN 6

Servo servoA;
Servo servoB;
Servo servoC;

byte positionA = 0;     // 0-50     =>
byte positionB = 5;     // 5-90-160 =>
byte positionC = 0;     // 120-180  =>

int step;

#define SERVOA_CONTROL(degree)    do{positionA = servoController(servoA,positionA,degree);}while(0)
#define SERVOB_CONTROL(degree)    do{positionB = servoController(servoB,positionB,degree);}while(0)
#define SERVOC_CONTROL(degree)    do{positionC = servoController(servoC,positionC,degree);}while(0)

byte servoController(Servo servo,byte start,byte stop = 0,int dl = 5){
    step = start > stop ? -1 : 1;
    Serial.println(step);
    switch (step) {
        case 1:for(byte pos = start;pos <= stop; pos += step){servo.write(pos);delay(dl);Serial.println("positionC: "+String(pos));}break;
        case -1:for(byte pos = start;pos >= stop; pos += step){servo.write(pos);delay(dl);Serial.println("positionC: "+String(pos));}break;
        default:break;
    }
    return stop;
}

void setup()
{
    Serial.begin(115200);
    servoA.attach(SERVO_A_PIN);
    servoB.attach(SERVO_B_PIN);
    servoC.attach(SERVO_C_PIN);
    SERVOA_CONTROL(positionA);
    SERVOB_CONTROL(positionB);
    SERVOC_CONTROL(positionC);
    delay(2000);
    // SERVOA_CONTROL(90);
    // SERVOB_CONTROL(90);
    SERVOC_CONTROL(70);
    // delay(2000);
    // SERVOB_CONTROL(170);

}

void loop(){

    // Serial.println("positionA: "+String(positionA)+"    positionB: "+String(positionB)+"    positionC: "+String(positionC));

}