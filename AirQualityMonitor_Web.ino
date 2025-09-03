#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <MQ135.h>

#define MQ135_PIN A0

const char* ssid = "Your_SSID";      // Replace with your Wi-Fi name
const char* password = "Your_PASSWORD"; // Replace with your Wi-Fi password

ESP8266WebServer server(80); // Web server on port 80
MQ135 mq135_sensor(MQ135_PIN);

void handleRoot() {
  float air_quality = mq135_sensor.getPPM();
  String html = "<!DOCTYPE html><html><head><title>Air Quality Monitor</title>";
  html += "<meta http-equiv='refresh' content='2'>";
  html += "<style>body{font-family:Arial;text-align:center;background:#f0f0f0;}h1{color:#333;}p{font-size:20px;}</style>";
  html += "</head><body>";
  html += "<h1>Air Quality Monitor</h1>";
  html += "<p>Air Quality (PPM): <b>" + String(air_quality) + "</b></p>";
  html += "</body></html>";
  server.send(200, "text/html", html);
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("\nConnected to WiFi!");
  Serial.print("ESP8266 IP Address: ");
  Serial.println(WiFi.localIP()); // This is where you access the dashboard
  
  server.on("/", handleRoot);
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}