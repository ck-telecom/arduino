#define ACCEL_ADDRESS 0x34
#define GYRO_ADDR 0x35

void accel_init(void)
{
  Wire.beginTransmission(ACCEL_ADDRESS);
  Wire.write(0x12);
  Wire.write(0x13);
  Wire.endTransmission();
}

void accel_read(void)
{
  int i = 0;
  byte buf[6];

  Wire.beginTransmission(ACCEL_ADDRESS);
  Wire.write(0x32);
  Wire.endTransmission();

  Wire.beginTransmission(ACCEL_ADDRESS);
  Wire.requestFrom(ACCEL_ADDRESS, 6);
  // ((Wire.available())&&(i<6))
  while(Wire.available()) {
    buf[i++] = Wire.read();
  }
  Wire.endTransmission();

  if (i == 6) {
    accel[0] = buf[0];
    accel[1] = buf[1];
    accel[2] = buf[2];
  }
}
void gyro_init(void)
{
  Wire.beginTransmission(GYRO_ADDR);
  Wire.write(11);
  Wire.write(11);
  Wire.endTransmission();
}

