#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void motorControl(uint8_t motorNum, uint16_t speed) {
  // Set the PWM signal for the specified motor
  // motorNum: 1 or 2 (corresponding to the motor driver connections)
  // speed: 0 to 4095 (0 for full stop, 4095 for maximum speed)
  
  if (motorNum == 1) {
    pwm.setPWM(0, 0, speed);
  } else if (motorNum == 2) {
    pwm.setPWM(1, 0, speed);
  }
}
void setup() {
  Serial.begin(9600);

  pwm.begin();
  pwm.setPWMFreq(60);  // Set the PWM frequency (you can adjust this based on your motor specifications)
}

void loop() {
  // Run the motor forward
  motorControl(1, 4095);  // Adjust the second parameter for speed control
  delay(2000);

  // Run the motor backward
  motorControl(2, 0);  // Reverse direction
  delay(2000);

  // Stop the motor
  motorControl(1, 0);
  delay(2000);
}

