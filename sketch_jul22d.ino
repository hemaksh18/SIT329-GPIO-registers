#include "GPIO_DEAKIN.h"

void setup() {
    
  gpio.Config_GPIO('A', 7, OUTPUT);
}

void loop() {
    // Set PA07 (Digital Pin 4) at high
    gpio.Write_GPIO('A', 7, HIGH);
    delay(1000);

    // setting it low after 1 second
    gpio.Write_GPIO('A', 7, LOW);
    delay(1000);
}
