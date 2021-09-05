// Includes the Servo library
#include <Servo.h>. 
// Defines Trig and Echo pins of the Ultrasonic Sensor


Servo myServo; // Creates a servo object for controlling the servo motor
int distance;
void setup() {
  // Set up the pin mode for all the input and output pins


  // Set up the Serial communication

  // Defines on which pin is the servo motor attached
  
}
void loop() {
  // rotates the servo motor from 15 to 165 degrees
  for(;;){  
    // rotate the servo
    
    delay(30);
    distance = calculateDistance();// Calls a function for calculating the distance measured by the Ultrasonic sensor for each degree
    
    Serial.print(i); // Sends the current degree into the Serial Port
    Serial.print(","); // Sends addition character right next to the previous value needed later in the Processing IDE for indexing
    Serial.print(distance); // Sends the distance value into the Serial Port
    Serial.print("."); // Sends addition character right next to the previous value needed later in the Processing IDE for indexing
  }
  // rotates the servo motor from 165 to 15 degrees and perform the same task
  for(;;){
    // your code here  
    
  }
}
// Function for calculating the distance measured by the Ultrasonic sensor
int calculateDistance(){ 
  // Sets the trigPin on LOW state for 2 micro seconds
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  unsigned long duration; 

  // Calculate distance 
  float dist;
  return (int) dist; // return the distance
}
