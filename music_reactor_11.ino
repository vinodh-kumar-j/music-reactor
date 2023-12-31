//Music Reactive Led Strip
int soundSensor = 12;  //define Sound Sensor Pin
int LED = 11;          //define LED Strip Pin

void setup() 
{
  pinMode (soundSensor, INPUT); //define Sound Sensor as input
  pinMode (LED, OUTPUT);        //define LED Strip as output
}

void loop()
{
  int statusSensor = digitalRead (soundSensor);   //define variable of the Sound Sensor status
                                                  //and read value of the Sensor's
  
  if (statusSensor == 1)        //When the Sensor detects a signal
  {
    digitalWrite(LED, HIGH);    //LED Strip will be active
  }
  
  else                          //If no signal is detected
  {
    digitalWrite(LED, LOW);     //The status of the LED strip is deactivated
  }
  
}
