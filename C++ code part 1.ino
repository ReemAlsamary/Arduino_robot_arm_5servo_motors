// C++ code
#include<Servo.h>
Servo myServo1;// define variable constructor for the libirary for servo
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;
int pos = 0; // variable used to change the servo position
void setup()
{
  myServo1.attach(3); // attaches the servo on pin 3 to the servo object
  myServo2.attach(4); // attaches the servo on pin 4 to the servo object
  myServo3.attach(5); // attaches the servo on pin 5 to the servo object
  myServo4.attach(6); // attaches the servo on pin 6 to the servo object
  myServo5.attach(7); // attaches the servo on pin 7 to the servo object
}

void loop()
{
  for(pos=0;pos<=90;pos++){//ascending loop
    // sweep the servo from 0 to 90 degrees in steps of 1 degrees
    myServo1.write(pos);
    myServo2.write(pos);
    myServo3.write(pos);
    myServo4.write(pos);
    myServo5.write(pos);
    delay(20);
}
   for(pos=90;pos>=0;pos--){//descending loop
    // sweep the servo from 90 to 0 degrees in steps of 1 degrees
    myServo1.write(pos);
    myServo2.write(pos);
    myServo3.write(pos);
    myServo4.write(pos);
    myServo5.write(pos);
    delay(30);
  }
}
