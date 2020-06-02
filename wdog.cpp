#include "wdog.h"

//////////////////////////////////////////////////////
// Watchdog setup and configuration

void wdog_start(){
  wdt_enable(WDTO_250MS);
}

void wdog_reset(){
  wdt_reset();
}

// watchdog reset handler
//isr(wdt_vect)
//{
  // todo - write to eeprom? something to track the fact we are resetting unexpectedly
//}


