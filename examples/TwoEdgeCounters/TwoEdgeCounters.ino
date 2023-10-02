// Include the library for the TriggerCounter
#include <TriggerCounter.hpp>

// Create an instance of the TriggerCounter class for the first counter
long counts1;
const int counterPin1 = 2;
TriggerCounter counter1;

// Create an instance of the TriggerCounter class for the second counter
long counts2;
const int counterPin2 = 3;
TriggerCounter counter2;

// Initialize the instances in the setup() function
void setup() {
  Serial.begin(115200);
  if(!counter1.begin(counterPin1)) Serial.println("Pin no allowed for interrupts.");
  if(!counter2.begin(counterPin2)) Serial.println("Pin no allowed for interrupts.");
}

// Count pulses and get the current values for both counters
void loop() {
  counts1 = counter1.getCount();
  counts2 = counter2.getCount();
  
  Serial.print("counters Pulses: ");
  Serial.print(counts1);
  Serial.print("\t");
  Serial.println(counts2);
  
  delay(100);
}
