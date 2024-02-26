#include <Servo.h>

int trigPin = (10);     // Add the Trig pin on pin 10.
int echoPin = (9);      // Add the ECHO pin on pin 9.
int duration, distance; // Add types 'duration' and 'distance'.
int pos = 0;            // variable to store the servo position
const int buzzer = 8;   // Add the Buzzer pin on pin 8.

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
  pinMode (echoPin, INPUT);  // The ECHO pin will recieve the rebounded wave, so it must be an input type.
  pinMode (trigPin, OUTPUT); // Same as above, the TRIG pin will send the ultrasonic wave.
  myservo.attach(11);        // attaches the servo on pin 11 to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
    
    if ((pos % 2) == 0){
    digitalWrite (trigPin, HIGH);
    delay(50);
    digitalWrite (trigPin, LOW);
    duration=pulseIn(echoPin,HIGH);
    distance=(duration/2)/29.1;
     if (distance <= 10){
      tone(buzzer, 500); // Send 500Hz sound signal...
      delay(1000);       // ...for 1 sec
      noTone(buzzer);    // Stop sound...
    }
  }
    delay(10);
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);                 // tell servo to go to position in variable 'pos'
    delay(5);                           // waits 5ms for the servo to reach the position

    if ((pos % 2) == 0){
    digitalWrite (trigPin, HIGH);
    delay(50);
    digitalWrite (trigPin, LOW);
    duration=pulseIn(echoPin,HIGH);
    distance=(duration/2)/29.1;
     if (distance <= 10){
      tone(buzzer, 500); // Send 500Hz sound signal...
      delay(1000);       // ...for 1 sec
      noTone(buzzer);    // Stop sound...
    }
  }
    delay(10);
  }
}

