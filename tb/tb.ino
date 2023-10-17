// include the library
#include <TimedBlink.h>
int led=6;

TimedBlink monitor(led);

void setup() {
  pinMode(led, OUTPUT);
  // Configure the function with times to stay on and off
  monitor.blink(500,500);
}

void loop() {
  // call frequently to blink at scheduled times.
  monitor.blink();
}
