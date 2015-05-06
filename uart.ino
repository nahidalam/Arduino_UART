char inData[100]; // Or whatever size you need
byte index = 0;
 
void setup() {
        Serial.begin(115200);     // opens serial port, sets data rate 
}

void loop()
{
  while(Serial.available() > 0)
  {
     char aChar = Serial.read();

     inData[index] = aChar; // Add the character to the array
     index++;   // Point to the next position
     inData[index] = '\0'; // NULL terminate the array
  }
  Serial.println(inData);
}
