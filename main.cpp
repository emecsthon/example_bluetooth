#include "mbed.h"

//bluetooth module employs Serial Communication.
Serial bluetooth(PA_9, PA_10);//Tx, Rx

AnalogIn sensor(PA_0); 

int main()
{
    bluetooth.baud(9600);
    while(1) {
        wait(1);
        float humidity = sensor.read(); /* Read analog value */
        
        /* Calculate the resistance of the thermistor from analog votage read. */
        float hum_value= ((abs(humidity-1)/0.55)*100);
        
        bluetooth.printf("\n Humidity level: %f", hum_value);
       
    }
}