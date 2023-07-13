/*The presented mini project aims to develop an automatic street light controller 
using Arduino microcontroller and sensors. The system utilizes a light 
sensor to control the electricity based on night and object detection. 
This helps in conserving energy, reducing wastage, increasing the lifetime 
of the streetlights, and improving safety. Arduino UNO, a low-cost and 
easy-to-use programmable microcontroller board, is used for this project.
It features an AVR microcontroller Atmega328, analogue and digital
input/output pins, and can be integrated into various electronic projects.
*/

void setup() {
    Serial.begin(9600);
    pinMode(13,OUTPUT);
}

// Reads the analog input ranging from 0 to 1023
void loop() {
    float sensorValue = 
    analogRead(A0);
    
    Serial.println(sensorValue);
    if(sensorValue<=200){
        digitalWrite(13,HIGH);
    }else{
        digitalWrite(13,LOW);
    }
}