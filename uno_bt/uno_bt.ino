#include <SoftwareSerial.h>

#define TX 2
#define RX 3

SoftwareSerial BTSerial(TX, RX);

void setup() {

  Serial.begin(9600);
  BTSerial.begin(9600);
  Serial.println("start");
  delay(100);

}

void loop() {

  if (BTSerial.available())
    Serial.write(BTSerial.read());
    delay(10);
  if (Serial.available())
    BTSerial.write(Serial.read());

}
