#include <ESP8266WiFi.h>
#include <DHT.h>

#define DHTPIN D4
#define DHTTYPE DHT22
#define FLAME_PIN D6

DHT dht(DHTPIN, DHTTYPE);
const char* ssid = "cewenyagunwook";
const char* password = "123456789";

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(FLAME_PIN, INPUT);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.print(F("Connecting to WiFi..."));
  unsigned long st = millis();
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(F("."));
    if (millis() - st > 15000) ESP.restart();
  }
  Serial.println();
  Serial.print(F("IP: "));
  Serial.println(WiFi.localIP());
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  int flame = digitalRead(FLAME_PIN);

  if (!isnan(h) && !isnan(t)) {
    Serial.print(F("T: ")); Serial.print(t); Serial.print(F(" C  H: ")); Serial.println(h);
  } else {
    Serial.println(F("DHT error"));
  }

  Serial.print(F("Flame: "));
  Serial.println(flame == LOW ? F("DETECTED") : F("NONE"));

  delay(2000);
}
