/*
Example for Embedded Switch and LED in 9-in-1 Expansion Board for Arduino Uno.
By: RoboticX Team
*/

#define SWITCH_PIN 3
#define LED_PIN 12

int switchState; // To store the state of switch

void setup() {
  // Set pin and D3 as input
  pinMode(SWITCH_PIN, INPUT);

  // Set pin D12 as output
  pinMode(LED_PIN, OUTPUT);

  // Turn off the LED initially
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  // Read the states of the switches
  switchState = digitalRead(SWITCH_PIN);

  // Check if switch is pressed
  if (switchState == HIGH) {
    // Turn on LED
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    // Turn off LED
    digitalWrite(LED_PIN, LOW);
  }

  // Delay for 100 milliseconds
  delay(100);
}
