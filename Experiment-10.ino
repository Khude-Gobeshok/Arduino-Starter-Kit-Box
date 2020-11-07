/*     ---------------------------------------------------------
 *     |  Arduino Experimentation Kit Example Code             |
 *     |  CIRC-10 .: Temperature :. (LM35 Temperature Sensor) |
 *     ---------------------------------------------------------
 *   
 *  A simple program to output the current temperature to the IDE's debug window 
 * 
 */

float temp; //variable to store temperature in decimal

void setup() {
  
    Serial.begin(9600);//Start the serial connection with the computer.
                       //to view the result open the
                       //serial monitor.
                       //last button beneath the file
                       //bar (looks like a box with an
                       //antenna)
}

void loop() {
// run over and over again  
   temp = analogRead(A0); //it will read the data from analog pin A0
                          //where the sensor is physically connected
                          //in arduino. 
   temp = temp * 0.48828125;//input voltage 5 Volts
                            //Total number of bits = 10
                            //Total range = 2^10 = 1024
                            //5/1024 = 0.0048828125 Volt
                            //0.0048828125*1000=4.8828125mV
                            //as 10 mV / degree centigrade
                            //4.8828125/10 = 0.48828125
   Serial.print("TEMPERATURE: ");
   Serial.print(temp);
   Serial.print("*C"); //print the result
   Serial.println(); // print new line
   delay(1000); //waiting a second
}
