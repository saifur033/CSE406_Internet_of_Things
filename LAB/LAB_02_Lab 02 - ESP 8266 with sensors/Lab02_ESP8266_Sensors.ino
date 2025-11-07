#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN D4       // DHT11 data pin -> D4 (GPIO2)
#define DHTTYPE DHT11
#define WATER_PIN A0    // Water sensor analog out -> A0

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  delay(500);
}

void loop() {
  // Read DHT11
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // °C

  // Read water sensor
  int raw = analogRead(WATER_PIN); // 0..1023

  // Calibration values (adjust for your sensor)
  const int DRY_RAW = 150;   // sensor in air
  const int WET_RAW = 900;   // sensor fully in water

  float pct = 100.0 * (raw - DRY_RAW) / (WET_RAW - DRY_RAW);
  if (pct < 0) pct = 0;
  if (pct > 100) pct = 100;

  // Print results
  Serial.print("Temp: ");
  Serial.print(isnan(t) ? -999 : t, 1);
  Serial.print(" °C   Hum: ");
  Serial.print(isnan(h) ? -999 : h, 1);
  Serial.print(" %   WaterRaw: ");
  Serial.print(raw);
  Serial.print("   Water~: ");
  Serial.print(pct, 0);
  Serial.println(" %");

  delay(1000);
}

