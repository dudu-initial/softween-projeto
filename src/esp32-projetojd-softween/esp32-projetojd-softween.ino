#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect(); // Desconecta de redes conhecidas

  // Inicia a varredura de redes Wi-Fi
  int numNetworks = WiFi.scanNetworks();
  for (int i = 0; i < numNetworks; i++) {
    Serial.print("SSID: ");
    Serial.println(WiFi.SSID(i));
    Serial.print("MAC: ");
    Serial.println(WiFi.BSSIDstr(i));
    Serial.print("RSSI: ");
    Serial.println(WiFi.RSSI(i));
    Serial.println();
  }
}

void loop() {
  // Seu código principal aqui
}
