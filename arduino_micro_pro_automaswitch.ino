#include <SoftwareSerial.h>
#include <XInput.h>

SoftwareSerial mySerial_1(5, 7); // RX, TX
String message;

void setup() {
  XInput.begin();
  mySerial_1.begin(9600);
}

void loop() {
  //XInput.press(BUTTON_A);
  //delay(1000);

  //XInput.release(BUTTON_A);
  delay(1000);
  mySerial_1.listen();

  mySerial_1.println("Data from port one:");

while (mySerial_1.available() > 0) {

    char inByte = mySerial_1.read();

    mySerial_1.write(inByte);
mySerial_1.println("xxxxxxxxxxxxxx");
  }
}
