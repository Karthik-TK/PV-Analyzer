

//Connect Current Module to Analog Pin A0
//Connect Voltage Module to Analog Pin A1
//Connect Temperature Module to Analog Pin A2
//Connect LDR Module to Analog Pin A3

//Function Prototype of Luminosity
double Light();
//Initialize Lux unit as a variable and assign value as '0'
int lux =0;

//Function for Lux Sensing
double Light (int RawADC0)
    {
      double Vout=RawADC0*0.0048828125;
      int lux=500/(10*((5-Vout)/Vout));
      return lux;
    }

//Setup function

int sensorPin = A0;
int sensorValue = 0;

//Use it for setting up the Baud Rate for communication as 9600Hz 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
 float average = 0;

//CURRENT SENSOR//
 for(int i = 0; i < 1000; i++) {
//     average = average + (.0264 * analogRead(A0) -13.51);//for the 5A mode,  
   average = average + (.049 * analogRead(A0) -25);// for 20A mode
// average = average + (.742 * analogRead(A0) -37.8);// for 30A mode
   delay(1);
 }
 Serial.println(" ");
 Serial.print("Current :");
 Serial.print(average/1000);
 Serial.print("A");	
 Serial.println(" ");
 
                      

 //VOLTAGE SENSOR//
     float sense = analogRead(A1);
  float val = (5 * sense )/1024;
  float volt = (val * 5);
  Serial.print("Volt:");
  Serial.print(volt);
  Serial.print("V");
  delay(2500);
 
  //TEMPERATURE SENSOR//
    float sensorValue = analogRead(A2);
    float voltage = (sensorValue * 5)/1024;
    float temp = voltage * 100 ;
    Serial.print("Temp:");
    Serial.print(temp);
    Serial.println(" ");
   
  //LIGHT SENSOR PROGRAM//
    Serial.print("Luminosity: ");
    Serial.print(int(Light(analogRead(A3))));
    Serial.print(" Lux");
    Serial.println(" ");
}
