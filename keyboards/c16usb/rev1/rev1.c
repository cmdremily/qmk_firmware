#include "rev1.h"
#include "drivers/issi/is31fl3731.h"

void keyboard_pre_init_kb(void) {
  backlight_enable();
}

void backlight_init_ports(void) {
  setPinOutput(BACKLIGHT_PIN);
  writePinHigh(BACKLIGHT_PIN);
}

void backlight_set(uint8_t level) {
  if(level == 0){
    writePinLow(BACKLIGHT_PIN);
  }else{
    writePinHigh(BACKLIGHT_PIN);
  }
}


/*extern bool     breathing;
extern uint16_t breathing_counter;
*/
/*
static const uint8_t sos_table[] = {0,1,0,1,0,1,0,0,1,1,0,1,1,0,1,1,0,0,1,0,1,0,1,0,0,0};
static const uint8_t sos_counts = 100;
uint8_t sos_index = sizeof(sos_table);
uint8_t sos_count = 0;

void breathing_enable(){
    breathing_counter = 0;
    breathing         = true;
  sos_index = 0;
  sos_count = 0;
}

void breathing_disable(){
  breathing = false;
}

void breathing_task(void) {
  if(sos_index < sizeof(sos_table)){
    backlight_set(sos_table[sos_index]);
    if(sos_count >= sos_counts){
      sos_count = 0;
      sos_index++;
      if(sos_index >= sizeof(sos_table)){
	sos_index = 0;
      }
    }
  }
}
*/
