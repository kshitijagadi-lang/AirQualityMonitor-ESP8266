# AirQualityMonitor-ESP8266
IoT project using ESP8266 + MQ135 to monitor air quality
AirQualityMonitor-ESP8266

IoT project using ESP8266 + MQ135 to monitor air quality and visualize data on a web dashboard.

⸻

Project Overview

This project monitors air quality using the MQ135 gas sensor and sends real-time data to a simple web dashboard hosted on the ESP8266 itself.
You can access the data on any device connected to the same network.

⸻

Features
	•	Real-time Air Quality Monitoring
	•	Simple Web Dashboard Interface
	•	Wi-Fi Enabled (ESP8266)
	•	Easy to Deploy & Use

⸻

Hardware Requirements
	•	ESP8266 (NodeMCU or Wemos D1 Mini)
	•	MQ135 Gas Sensor
	•	Jumper Wires
	•	Breadboard
	•	USB Cable
MQ135     ESP8266
VCC   --> 3.3V
GND   --> GND
AOUT  --> A0
Software Requirements
	•	Arduino IDE
	•	ESP8266 Board Package for Arduino IDE
	•	Libraries:
	•	ESP8266WiFi.h
	•	ESP8266WebServer.h

⸻

Installation & Setup
	1.	Install Arduino IDE & add ESP8266 board support
	2.	Install required libraries
	3.	Upload AirQualityMonitor_Web.ino to your ESP8266
	4.	Open Serial Monitor to get the device IP
	5.	Open the IP in any web browser to view the dashboard

⸻

Future Improvements
	•	Add Blynk or Thingspeak for Cloud Monitoring
	•	Add SMS/Email Alerts for Poor Air Quality
	•	Display Historical Data Graphs

⸻

License

This project is licensed under the MIT License.