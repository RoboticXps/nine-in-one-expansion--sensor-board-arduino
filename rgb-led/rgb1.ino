/*
Example for Embedded RGB LED in 9-in-1 Expansion Board for Arduino Uno.
By: RoboticX Team
*/

#define RED 9
#define GREEN 10
#define BLUE 11

void setup() {
  // Set pins D9, D10, and D11 as output (Based on kit specs)
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  // Set the RGB LED to red
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);

  // Delay for 1 second
  delay(1000);

  // Set the RGB LED to green
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);

  // Delay for 1 second
  delay(1000);

  // Set the RGB LED to blue
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);

  // Delay for 1 second
  delay(1000);

  // Turn off the RGB LED
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);

  // Delay for 1 second
  delay(1000);
}
