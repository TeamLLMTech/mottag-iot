#include <WiFi.h>

const char* ssid = "antena2";
const char* password = "0fab30a4-f0b0-4d11-a764-75c1b578c4f8";

WiFiServer server(80);

void setup() {
  Serial.begin(115200);

  pinMode(LED_BUILTIN, OUTPUT);

  Serial.print("Criando AP (Access Point)…");
  WiFi.softAP(ssid, password);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("Endereco IP: ");
  Serial.println(IP);

  server.begin();
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(13000);
}