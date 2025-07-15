#include <Servo.h>

// Create 4 servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // Attach each servo to its pin
  servo1.attach(6);
  servo2.attach(9);
  servo3.attach(3);
  servo4.attach(11);

  unsigned long startTime = millis();
  
  // Sweep motion for 2 seconds
  while (millis() - startTime < 2000) {
    for (int angle = 0; angle <= 180; angle++) {
      servo1.write(angle);
      servo2.write(angle);
      servo3.write(angle);
      servo4.write(angle);
      delay(5);
    }
    for (int angle = 180; angle >= 0; angle--) {
      servo1.write(angle);
      servo2.write(angle);
      servo3.write(angle);
      servo4.write(angle);
      delay(5);
    }
  }

  // Hold all servos at 90°
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {
  // Do nothing, servos hold at 90 degrees
}
