Weather Station

The Weather Station project is designed to measure and display temperature, humidity, and altitude using an LCD display and a BME280 sensor. The BME280 sensor provides accurate measurements of temperature, humidity, and pressure, which are then displayed on the LCD.

Hardware Requirements:

Arduino board (e.g., Arduino Uno),
BME280 sensor,
LCD display (16x2),
Jumper wires,
Breadboard (optional).

Software Requirements:

Arduino IDE,
Adafruit BME280 library,
LiquidCrystal library.

Setup:

Install the Arduino IDE: Download and install the Arduino IDE from the official website.

Install Libraries:

Open the Arduino IDE.

Go to Sketch > Include Library > Manage Libraries.

Search for and install the Adafruit BME280 library.

The LiquidCrystal library is included with the Arduino IDE by default.

Wire the Components:

Connect the BME280 sensor to the Arduino board according to the manufacturer's instructions.

Connect the LCD display to the Arduino board as follows:

VSS to GND

VDD to 5V

VO to the potentiometer (for contrast adjustment)

RS to digital pin 12

RW to GND

E to digital pin 11

D4 to digital pin 5

D5 to digital pin 4

D6 to digital pin 3

D7 to digital pin 2

A and K to GND


Usage:

Upload the Code:

Open the Arduino IDE.

Copy and paste the code from the weatherstation.ino file into the Arduino IDE.

Select the correct board and port from the Tools menu.

Click the Upload button to upload the code to the Arduino board.

Monitor the Output:

Once the code is uploaded, the LCD display will show the temperature, humidity, and altitude readings from the BME280 sensor.
The display updates every 2 seconds.
