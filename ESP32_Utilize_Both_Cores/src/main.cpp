#include <Arduino.h>

TaskHandle_t OnCore0;

// Function to run on core 0
void Core0(void *pvParameters);


void setup() {
  // Create a task that will be executed on core 0 in the Core0() function, with priority 1.
  xTaskCreatePinnedToCore(
                    Core0,   /* Task function. */
                    "OnCore0",     /* name of task. */
                    10000,       /* Stack size of task */
                    NULL,        /* parameter of the task */
                    1,           /* priority of the task */
                    &OnCore0,      /* Task handle to keep track of created task */
                    0);          /* pin task to core 0 */                  

}

void Core0(void *pvParameters) {
  // The while loop simulates the loop() function
  while(1) {
    // Your code to run on core 0

  }
}

void loop() {
  // The loop() function runs by default on core 1 
  
}