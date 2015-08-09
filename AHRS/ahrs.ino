#include <Wire.h>

float accel[3];
float gyro[3];

void i2c_init(void)
{
  Wire.begin();
}

void serial_init(void)
{
  Serial.begin(115200);
}

void setup() {
  serial_init();
  i2c_init();
  accel_init();
  gyro_init();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print('c');
  delay(1000);
}

