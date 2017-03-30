


#include <avr/pgmspace.h>


uint8_t const rawData[] PROGMEM = // progmem places data in program memory, not the small space for globals
{
    
// LTM data in hexa format here 0x24, 0x54, ...
// use raw data from Realterm or similar, then 'copy as C source' with Hex Workshop tool

} ;




  
void setup() {
  Serial.begin(9600); // use here what you need
  Serial.println("Arduino LTM data sender for testing. Connect bluetooth module to serial port");
}

void loop() {

    // Serial.write(rawData, sizeof(rawData));
     for ( uint16_t i = 0; i < sizeof(rawData); i++) 
     
     Serial.write (pgm_read_byte(&rawData[i]));
 

}
