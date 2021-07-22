# Arduino_robot_arm_5servo_motors
Controlling 5 servo motors for the robotic arm to be in 90 degree.

# Task Requirements:
- Design an electric circuit with 5 servo motors for the robot arm motors, Set the motors degree to 90.
- Control the motors using potentiometer.

## **Tools:**
- Arduino Uno R3.
- 5 Servo motors.
- Breadboard.
- Wires.
- Potentiometer.

--- 

### **Steps:**
1. Creating an account at TINKERCAD, then creating a new Circuit.

2. Connecting the Robot Arm motors circuit diagram using Tinkercad.

<img width="968" alt="Screen Shot 1442-12-12 at 4 09 01 AM" src="https://user-images.githubusercontent.com/86277104/126581523-9c752b2e-2496-48c4-a809-541e24d8b2a9.png">

3. Programing the circuit using C++ to set the motors to 90 degree, by using the following code:
```
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
```
- **The Output:** 
[Video of  motors set to rotate 90degree .zip](https://github.com/ReemAlsamary/Arduino_robot_arm_5servo_motors/files/6865540/Video.of.motors.set.to.rotate.90degree.zip)

4. Controlling the servo motors using potentiometerUse, each one have three wires: terminal1 (connected to positive pin), wiper(they can be connected in any pin of the numbers that start with the letter A pin),terminal2 (connected to negative pin).
NOTE: Micro Servoes go from 0 to 90 degrees but the potentiometer can go from 0 to 1023 so it only tak 1/11 of potentiometer to actually max out the servo and then the reset would be useless,to prevent that from happening we need a map function to changes 0-1023 to 0-90 .



