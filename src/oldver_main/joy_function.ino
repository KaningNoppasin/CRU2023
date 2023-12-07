// Read the number of a specified channel and convert to the range provided.
// If the channel is off, return the default value
int readChannel(int channelInput, int minLimit, int maxLimit, int defaultValue){
    int ch = pulseIn(channelInput, HIGH, 30000);
    if (ch < 100) return defaultValue;
    return map(ch, 950, 2000, minLimit, maxLimit);
}

// Read the switch channel and return a boolean value
bool readSwitch(byte channelInput, bool defaultValue){
    int intDefaultValue = (defaultValue)? 100: 0;
    int ch = readChannel(channelInput, 0, 100, intDefaultValue);
    return (ch > 50);
}

struct JOY {
    byte direction;
    byte servo_y_axis;
    byte servo_degree;
    byte gripper;
};

JOY getValueFromJOY(){
    ch1Value = readChannel(CH1, -100, 100, 0);  // robot x-axix (forward+,backward-)
    ch2Value = readChannel(CH2, -100, 100, 0);  // =>none
    ch3Value = readChannel(CH3, -100, 100, 0);  // servo y-axis (up,down)
    ch4Value = readChannel(CH4, -100, 100, 0);  // robot y-axis (left-,right+)
    ch5Value = readChannel(CH5, -100, 100, 0);  // servo turn 0 90 180 degree
    ch6Value = readSwitch(CH6,false);  //  gripper ob off

    //  1=>Forward 2=>Backward 3=>Right 4=>Left 5=>Stop
    JOY.direction = ch1Value > offSet ? 1 : ch1Value < -offSet ? 2 : ch4Value > offSet ? 3 : ch4Value < -offSet ? 4 : 5;
    //  1=>up 2=>down
    JOY.servo_y_axis = ch3Value > offSet ? 1 : 2;
    //  1=>0 2=>90 3=>180
    JOY.servo_degree = ch5Value > offSet ? 1 : ch5Value <= offSet && ch5Value >= -offSet ? 2 : 3;
    //  1=>on 2=>off
    JOY.gripper = ch6Value ? 1 : 2;
    return JOY
}