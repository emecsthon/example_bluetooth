#include "mbed.h"

//bluetooth module employs Serial Communication.
Serial bluetooth(PA_9, PA_10);//Tx, Rx

DigitalOut myled(PA_5); //LED
 
int main(void)
{
    char ch;
    bluetooth.baud(9600);
    
    while(1)
    {
        if(bluetooth.readable())
        {
            ch=bluetooth.getc();
            if (ch == '1')
            {
                myled = 1;
            }
            if (ch == '2')
            {
                myled = 0;
            }
                
        }
    }
}