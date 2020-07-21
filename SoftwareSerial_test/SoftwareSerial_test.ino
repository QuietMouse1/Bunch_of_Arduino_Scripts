#include <SoftwareSerial.h> 
SoftwareSerial mySerial(2, 3); // RX, TX

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
  mySerial.write("hello");
}

void loop() {
  // put your main code here, to run repeatedly:
  mySerial.write("hello\n");
  delay(2000);
  mySerial.flush();
}
