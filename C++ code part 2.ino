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