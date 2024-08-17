#include <LiquidCrystal.h>
#include <Adafruit_BME280.h>

// Initialize the LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Initialize the BME280 sensor
Adafruit_BME280 bme;

// Calibration values
float seaLevelPressure = 1013.25; // pressure at sea level in hPa
float temperatureOffset = 0.0; // temperature offset in degrees Celsius
float humidityOffset = 0.0; // humidity offset in percentage

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);

  // Set up the BME280 sensor
  if (!bme.begin(0x76)) {
    lcd.print("Could not find a valid BME280 sensor, check wiring!");
    while (1) {}
  }
}

void loop() {
  // Read temperature, humidity, and pressure from the BME280 sensor
  float t = bme.readTemperature() + temperatureOffset;
  float h = bme.readHumidity() + humidityOffset;
  float p = bme.readPressure() / 100.0; // convert pressure to hPa

  // Calculate altitude using the barometric formula
  float altitude = bme.readAltitude(seaLevelPressure);

  // Display the data on the LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(h);
  lcd.print("% Alt: ");
  lcd.print(altitude);
  lcd.print(" m");

  delay(2000);
}
