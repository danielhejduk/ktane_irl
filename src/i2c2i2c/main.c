#include <avr/io.h>
#include <util/delay.h>
#include "status.h"

int
main(void) {
    DDRB |= (1 << DDB0) | (1 << DDB1); // Setting output pins

    enum BLINKSTATUS status = NORMAL;

    while (1) {
        status_blink(status);
    }
    
    return 0; // This line will never be reached
}

