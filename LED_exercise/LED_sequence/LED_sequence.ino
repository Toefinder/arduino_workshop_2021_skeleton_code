// initialize the pin array (byte) and array size



// initialize variable for incoming serial data
char incomingByte = 'n'; 
/**************************************/

void setup()
{
  //set pins in the pin array as output mode
  for (int pinIndex;;)
  { 
    // access the pin value

    // set pin mode
    
  }

  // set up the Serial communication, note the baud rate
  
  // print some instructions to Serial monitor for user 
  
}

/****************************************/

void loop()
{
  // check if Serial data are available. 
  if (Serial.available() > 0) {
    // read the incoming byte

    // print out the data to show user that Arduino has received correctly

    
  }
  if (incomingByte == 'r') {
    //turn the led on from left to right
    
  
    //fade from the left to right

    
  } else {
    //turn the led on from right to left

    
  
    //fade from the right to left

    
  }
}
