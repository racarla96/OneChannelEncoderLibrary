# Trigger Counter Library

The **Trigger Counter Library** is an Arduino library that abstracts the function of counting the number of interrupts of a pin. The library was born with the objective of counting pulses of a single-channel encoder using interrupts, which allows counting the number of rising and falling edges of a sensor.

## Features

- Edge counting, for example, from a single-channel encoder.
- Function to clear the edge counter.
- Interrupts enabling and disabling to prevent race conditions.
- See [Arduino Documentation of attachInterrupt() to change counts](https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/)

## Installation

1. Download the library as a ZIP file from [this link](https://github.com/racarla96/TriggerCounterLibrary/archive/main.zip).

2. Open the Arduino IDE.

3. Navigate to `Sketch > Include Library > Add .ZIP Library`.

4. Select the ZIP file you downloaded in step 1.

## Usage

```cpp
// Include the library in your sketch
#include <TriggerCounter.hpp>

// Create an instance of the TriggerCounter class
volatile long counts;
const int counterPin = 2;
TriggerCounter counter(counterPin);

// Initialize the instance in the setup() function
void setup() {
  Serial.begin(115200);
  if(!counter.begin()) Serial.println("Pin no allowed for interrupts.");
}

// Count pulses and get the current value
void loop() {
  counts = counter.getCount();
  Serial.print("Encoder Pulses: ");
  Serial.println(counts);
  delay(100);
}
```

## Contributions
Contributions are welcome! If you find bugs or have suggestions to improve this library, please create an issue on the GitHub repository.
- [Encoder Library by PaulStoffregen - utility/interrupts_pins.h](https://github.com/PaulStoffregen/Encoder)

## Author
Name: Rafael Carbonell

## License
This library is licensed under the MIT License. See the LICENSE file for more information.

## TODOs
- Include mechanism of callback function, maybe with every N number of counts, it can be an option - https://www.onetransistor.eu/2019/05/arduino-class-interrupts-and-callbacks.html