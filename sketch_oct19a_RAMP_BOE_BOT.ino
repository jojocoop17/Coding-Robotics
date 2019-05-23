

#include <Servo.h>                           // Include servo library





Servo servoRight;
Servo servoLeft;                             // Declare left and right servos

 
void setup()                                 // Built-in initialization block
{
     Servo servoRight;
Servo servoLeft;                           // Delay to finish tone

  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12

  // Full speed forward
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(2000);                               // ...for 2 seconds
// Turn right in place
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1450);        // Right wheel counterclockwise
  delay(1500);                                // ...for 0.6 seconds

  // Turn left in place
  servoLeft.writeMicroseconds(1550);         // Left wheel clockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(3000);                                // ...for 0.6 seconds

  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1450);        // Right wheel counterclockwise
  delay(1400);    
 
  // Full speed forward
  servoLeft.writeMicroseconds(1700);         // Left wheel clockwise
  servoRight.writeMicroseconds(1300);        // Right wheel counterclockwise
  delay(2000);                               // ...for 2 seconds

  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach();
}  

void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
}

