
#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1);
String message;

void setup() {
  mySerial.begin(9600);
  
}

void loop() {
  
digitalWrite(LED_BUILTIN, HIGH);
      delay(100);
      digitalWrite(LED_BUILTIN, LOW);
      
 if (mySerial.available()) {
    message = (mySerial.read());
    if (message == 'A') {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(100);
      digitalWrite(LED_BUILTIN, LOW);
  }
 }
}
