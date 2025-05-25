#include "WiFi.h"

void setup() {
  while (!Serial) delay(100);
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  pinMode(LED_BUILTIN, OUTPUT);

  Serial.println("Setup concluido");
}

void loop() {
  Serial.println("Scan iniciado");
  digitalWrite(LED_BUILTIN, HIGH);

  String antena = "antena";

  int n = WiFi.scanNetworks();
  
  Serial.println("Scan concluido");
  digitalWrite(LED_BUILTIN, LOW);

  if (n == 0) {
    Serial.println("Nenhuma rede encontrada");
  } else {
    for (int i = 0; i < n; ++i) {
      if (WiFi.SSID(i) == "antena1" || WiFi.SSID(i) == "antena2") {
        Serial.print("Antena encontrada: ");
        Serial.println(WiFi.SSID(i).c_str());
        Serial.print("Potencia sinal: ");
        Serial.println(WiFi.RSSI(i));
      }
      delay(10);
    }
  }
  Serial.println("");

  WiFi.scanDelete();

  delay(5000);
}