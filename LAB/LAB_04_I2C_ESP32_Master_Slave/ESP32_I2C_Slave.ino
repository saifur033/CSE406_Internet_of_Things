// ESP32 I2C Slave (Arduino IDE) - minimal demo + 1-byte ACK
#include <Wire.h>

#define I2C_DEV_ADDR 0x55   // 7-bit slave address (must match master)

volatile unsigned long rx_count = 0;
volatile uint8_t last_checksum = 0; // for ACK in onRequest

// Callback: runs when master writes data to this slave
void onReceive(int len) {
  uint8_t sum = 0;
  Serial.printf("onReceive[%d]: ", len);
  while (Wire.available()) {
    uint8_t b = Wire.read();
    sum ^= b;          // simple XOR checksum
    Serial.write(b);   // print raw data for learning/debug
  }
  Serial.println();
  last_checksum = sum; // cache checksum for ACK
  rx_count++;
}

// Callback: runs when master calls requestFrom()
void onRequest() {
  Wire.write(last_checksum);  // send last checksum as ACK
  Serial.println("onRequest fired (ACK sent)");
}

void setup() {
  Serial.begin(115200);
  // Register callbacks
  Wire.onReceive(onReceive);
  Wire.onRequest(onRequest);
  // Initialize I2C in slave mode on default pins (SDA=21, SCL=22)
  Wire.begin((uint8_t)I2C_DEV_ADDR);
  Serial.println("I2C Slave ready");
}

void loop() {
  // Optional status every ~2s
  static uint32_t t0 = 0;
  if (millis() - t0 > 2000) {
    t0 = millis();
    Serial.printf("rx_count=%lu\n", rx_count);
  }
}
