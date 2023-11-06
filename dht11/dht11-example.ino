/*
Example for Embedded DHT11 Sensor in 9-in-1 Expansion Board for Arduino Uno.
By: RoboticX Team
*/
#include <DHT.h>

#define DHTPIN 4 // Digital pin D4 connected to the DHT sensor

DHT dht(DHTPIN, DHT11); // Initialize DHT sensor

void setup() {
  // Set up serial communication
  Serial.begin(9600);

  // Initialize DHT sensor
  dht.begin();
}

void loop() {
  // Read temperature and humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Print temperature and humidity to serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C");
  Serial.print(" Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  // Delay for 2 seconds
  delay(2000);
}


/*
Output sample:

Temperature: 25.80°C Humidity: 86.00%
Temperature: 25.60°C Humidity: 85.00%
Temperature: 25.50°C Humidity: 85.00%
*/