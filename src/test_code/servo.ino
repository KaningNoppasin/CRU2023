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

byte positionA = 0;     // 0-50
byte positionB = 5;     // 5-90-160
byte positionC = 130;     // 120-180

byte step;

#define SERVOA_CONTROL(degree)    do{positionA = servoController(servoA,positionA,degree);}while(0)
#define SERVOB_CONTROL(degree)    do{positionB = servoController(servoB,positionB,degree);}while(0)
#define SERVOC_CONTROL(degree)    do{positionC = servoController(servoC,positionC,degree);}while(0)

byte servoController(Servo servo,byte start,byte stop = 0,int dl = 5){
    step = start > stop ? -1 : 1;
    switch (step) {
        case 1:for(byte pos = start;pos <= stop; pos += step){servo.write(pos);delay(dl);}break;
        case -1:for(byte pos = start;pos >= stop; pos += step){servo.write(pos);delay(dl);}break;
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
    servoA.write(positionA);
    servoB.write(positionB);
    servoC.write(positionC);
    // SERVOA_CONTROL(0);
    // delay(2000);

    // SERVOA_CONTROL(50);

    // SERVOB_CONTROL(5);
    // delay(2000);
    // SERVOB_CONTROL(90);
    // delay(2000);
    // SERVOB_CONTROL(160);

    // SERVOC_CONTROL(120);
    // delay(2000);
    // SERVOC_CONTROL(150);

}

void loop(){
    for(byte pos = 120;pos <= 170; pos += 1){servoC.write(pos);delay(5);}
    for(byte pos = 170;pos >= 120; pos -= 1){servoC.write(pos);delay(5);}
    // SERVOA_CONTROL(0);
    // delay(2000);

    // SERVOA_CONTROL(50);
    // delay(2000);
    // Serial.println("positionA: "+String(positionA)+"    positionB: "+String(positionB)+"    positionC: "+String(positionC));
    // SERVOC_CONTROL(130);
    // delay(2000);
    // Serial.println("positionA: "+String(positionA)+"    positionB: "+String(positionB)+"    positionC: "+String(positionC));
    // SERVOC_CONTROL(150);
    // SERVOA_CONTROL(50);
    // Serial.println("positionA: "+String(positionA)+"    positionB: "+String(positionB)+"    positionC: "+String(positionC));
    // SERVOA_CONTROL(0);
    // Serial.println("positionA: "+String(positionA)+"    positionB: "+String(positionB)+"    positionC: "+String(positionC));

}