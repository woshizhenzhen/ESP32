#include <Arduino.h>
HardwareSerial MY_Serial(0);
void setup() {
  // put your setup code here, to run once:
  MY_Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  MY_Serial.write("Hallo World\r\n");
  delay(1000);
}