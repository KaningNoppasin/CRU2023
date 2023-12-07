struct MyValues {
    int value1;
    int value2;
    int value3;
};

MyValues getValues() {
    MyValues result;
    result.value1 = 10;
    result.value2 = 20;
    result.value3 = 30;
    return result;
}

void setup() {
    // Call the function
    MyValues values = getValues();

    // Use the returned values
    Serial.begin(9600);
    Serial.print("Value 1: ");
    Serial.println(values.value1);
    Serial.print("Value 2: ");
    Serial.println(values.value2);
    Serial.print("Value 3: ");
    Serial.println(values.value3);
}

void loop() {
    // Your main code here
}
