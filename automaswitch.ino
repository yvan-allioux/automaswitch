#include <XInput.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1);
String message;

void setup() {
	XInput.begin();
  mySerial.begin(9600);
  
}

void loop() {
	

 if (mySerial.available()) {
    message = (mySerial.read());
    if (message == 'A') {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(100);
      digitalWrite(LED_BUILTIN, LOW);
      XInput.press(BUTTON_A);
    delay(100);
  
    XInput.release(BUTTON_A);
    delay(100);
    }
  }
}
