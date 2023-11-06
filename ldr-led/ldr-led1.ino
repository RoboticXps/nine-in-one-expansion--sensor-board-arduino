/*
Example for Embedded LDR Sensor and LED in 9-in-1 Expansion Board for Arduino Uno.
By: RoboticX Team
*/

#define LDR_PIN A1
#define LED_PIN 13

int ldrValue; // To store the value of the LDR
int threshold = 500; // The threshold value for turning the LED on and off

void setup() {
  // Set pin A1 as input
  pinMode(LDR_PIN, INPUT);

  // Set pin D13 as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Read the value of the LDR
  ldrValue = analogRead(LDR_PIN);

  // Check if the LDR value is less than the threshold
  if (ldrValue < threshold) {
    // Turn the LED on
    digitalWrite(LED_PIN, HIGH);
  } else {
    // Turn the LED off
    digitalWrite(LED_PIN, LOW);
  }

  // Delay for 100 milliseconds
  delay(100);
}
