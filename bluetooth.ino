#include "BluetoothSerial.h"

BluetoothSerial bluetooth;

void setup() {
    Serial.begin(115200); // Serial number in serial monitor : 115200

    // a little talk about the serial 115200 basiclly its the baud rate the speed used for communication between the device and the computer thru USB serial
    // connection 
    // And basiclly you use the serial monitor to watch and have output like 

    // Serial.println("hi");
    // basiclly prints hi in the console so this is useful to have outputs and read what your projecct device giving or reading and then troubleshooting it :D

    // name for the bluetooth
    bluetooth.begin("Example bluetooth");

    Serial.println("Bluetooth is ready");
}

void loop() {
    // send desired msg to your phone/pc
    bluetooth.println("Hello World.!");

    Serial.println("Sent Completed");

    delay(1000);
}
