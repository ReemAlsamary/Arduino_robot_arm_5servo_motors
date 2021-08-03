# Arduino_robot_arm_5servo_motors
Controlling 5 servo motors for the robotic arm to be in 90 degree, then controlling them using potentiometer.


# Task Requirements:
- Design an electric circuit with 5 servo motors for the robot arm, Set the motors degree to 90.
- Control the motors using potentiometer.

## **Tools:**
- One Arduino Uno R3.
- 5 Servo motors.
- Breadboard.
- Wires.
- Potentiometers.

## **Steps:**


### 1. Creating an account at TINKERCAD, then creating a new Circuit.

---
### 2. Connecting the Robot Arm motors circuit diagram.
<img width="968" alt="Screen Shot 1442-12-12 at 4 09 01 AM" src="https://user-images.githubusercontent.com/86277104/126581523-9c752b2e-2496-48c4-a809-541e24d8b2a9.png">

---
### 3. Programing the circuit using C++ to set the motors to 90 degree, by using the following code:
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

---
### **The Output:** 
[Video of  motors set to rotate 90degree .zip](https://github.com/ReemAlsamary/Arduino_robot_arm_5servo_motors/files/6865540/Video.of.motors.set.to.rotate.90degree.zip)


---
### 4. Controlling the servo motors using potentiometers, each potentiometer have three wires: terminal1 (connected to positive pin), wiper(they can be connected in any pin of the numbers that start with the letter A pin),terminal2 (connected to negative pin).



- Programing the circuit using C++, by the following code:

```
// C++ code
#include <Servo.h> 

int pos1, pot1; // set initial pisition to 0
int pos2, pot2;
int pos3, pot3;
int pos4, pot4;
int pos5, pot5;

Servo myservo1; // define variable constructor for the libirary for servo
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
void setup()
{
  myservo1.attach(3, 500, 2500);
  myservo2.attach(4, 500, 2500);
  myservo3.attach(5, 500, 2500);
  myservo4.attach(6, 500, 2500);
  myservo5.attach(7, 500, 2500);
}

void loop()
{
  // sweep the servo from 0 to 180 degrees in steps of 1 degrees
 
        pot1=analogRead(A0); //read the potmeter 1 value (pot value from 0-1023)
  	pot2=analogRead(A1);
	pot3=analogRead(A2);
  	pot4=analogRead(A3);
  	pot5=analogRead(A4);
  
  	pos1=map(pot1,0,1023,0,90); //use map analog conversion to convert the value of potmeter 1 from 0-1023 to a degree value from 0-180
   	pos2=map(pot2,0,1023,0,90);
  	pos3=map(pot3,0,1023,0,90);
  	pos4=map(pot4,0,1023,0,90);
  	pos5=map(pot5,0,1023,0,90);
  
  	myservo1.write(pos1);// tell servo to go to position in variable 'pos' which is 90
	myservo2.write(pos2);
  	myservo3.write(pos3);
  	myservo4.write(pos4);
  	myservo5.write(pos5);
  	delay(10);
      
}


```

---

### **The Output:**

<img width="850" alt="Screen Shot 1442-12-13 at 2 43 24 AM" src="https://user-images.githubusercontent.com/86277104/126722659-3b0b3302-0519-4099-84c6-6da41f35c635.png">

---

### **Output video:**
[Controlling using Potentiometers.zip](https://github.com/ReemAlsamary/Arduino_robot_arm_5servo_motors/files/6865982/Controlling.using.Potentiometers.zip)
