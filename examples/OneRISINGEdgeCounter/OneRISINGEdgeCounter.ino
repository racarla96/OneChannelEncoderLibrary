// Include the library in your sketch
#include <TriggerCounter.hpp>

// Create an instance of the TriggerCounter class
volatile long counts;
const int counterPin = 2;
TriggerCounter counter;

// Initialize the instance in the setup() function
void setup() {
  Serial.begin(115200);
  if(!counter.begin(counterPin, RISING)) Serial.println("Pin no allowed for interrupts.");
}

// Count pulses and get the current value
void loop() {
  counts = counter.getCount();
  Serial.print("Encoder Pulses: ");
  Serial.println(counts);
  delay(100);
}