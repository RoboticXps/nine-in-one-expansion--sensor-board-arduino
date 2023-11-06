/*
Example for Embedded Potentiometer and Buzzer in 9-in-1 Expansion Board for Arduino Uno.
By: RoboticX Team
*/

#define POTENTIOMETER_PIN A0
#define BUZZER 5

void setup() {
  // Set pin A0 as input
  pinMode(POTENTIOMETER_PIN, INPUT);

  // Set pin D5 as output
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // Read the value of the rotary potentiometer
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);

  // Map the potentiometer value to a frequency
  int frequency = map(potentiometerValue, 0, 1023, 100, 1000);

  // Set the buzzer frequency
  tone(BUZZER, frequency);

  // Delay for 100 milliseconds
  delay(100);
}
