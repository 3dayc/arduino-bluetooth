#include <SoftwareSerial.h>

#define TX A10
#define RX A11

SoftwareSerial BTSerial(TX, RX);

void setup() {

  Serial.begin(9600);
  BTSerial.begin(115200);
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
