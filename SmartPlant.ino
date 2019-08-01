void setup() 
{
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  pinMode(LED_BUILTIN, OUTPUT); // initialize digital pin LED_BUILTIN as an output.
}

void loop() 
{
  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.println(val); //print the value to serial port
  delay(1000);

  if (val < 500) 
  {
    digitalWrite(LED_BUILTIN, HIGH); //Turn the LED on if the soil moisture analog read is below 500
  }
  if (val >= 500) 
  {
    digitalWrite(LED_BUILTIN, LOW); //Turn the LED off if the soil moisture analog read is above or equal to 500
  }
  
  
}
