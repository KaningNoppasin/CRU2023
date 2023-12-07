/*

    A-----B
    |  |  |
    |  |  |
    C-----D

*TODO => servo y-axis function
*TODO => servo degree function
*TODO => gripper function

*/
#include "joy_function.ino"
#include "IO_pin.ino"
#include "motor_controller.ino"



void setup()
{
    Serial.begin(9600);
    for(int i = 0;i<4;i++){pinMode(pinOUT[i],OUTPUT);}
}

void loop()
{
    JOY joyValue = getValueFromJOY()
    // Serial.print(ch1Value);
    // Serial.println(direction);
    switch (joyValue.direction) {
        case 1:FORWARD(defaultSpeed);break;
        case 2:BACKOFF(defaultSpeed);break;
        case 3:RIGHT(defaultSpeed);break;
        case 4:LEFT(defaultSpeed);break;
        case 5:STOP(defaultSpeed);break;
        default:STOP(defaultSpeed);break;
    }
  // switch (joyValue.servo_y_axis) {
  //     case 1:FORWARD(defaultSpeed);break;
  //     case 2:BACKOFF(defaultSpeed);break;
  //     default:STOP(defaultSpeed);break;
  //   }
  // switch (joyValue.servo_degree) {
  //     case 1:FORWARD(defaultSpeed);break;
  //     case 2:BACKOFF(defaultSpeed);break;
  //     case 3:RIGHT(defaultSpeed);break;
  //     default:STOP(defaultSpeed);break;
  //   }
  // switch (joyValue.gripper) {
  //     case 1:FORWARD(defaultSpeed);break;
  //     case 2:BACKOFF(defaultSpeed);break;
  //     default:STOP(defaultSpeed);break;
  //   }
}