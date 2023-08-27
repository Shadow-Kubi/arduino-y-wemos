#include "I2Cdev.h"
#include "MPU6050.h"
#include "Wire.h"

MPU6050 mpu;

int16_t ax, ay, az;

void iniciarMPU() {
  Wire.begin();
  mpu.initialize();

  if (mpu.testConnection()) Serial.println("MPU iniciado correctamente");
  else Serial.println("Error al iniciar MPU");
}

float obtenerInclinacionX(){
  mpu.getAcceleration(&ax, &ay, &az);
  float accel_ang_x=atan(ax/sqrt(pow(ay,2) + pow(az,2)))*(180.0/3.14);
  return accel_ang_x;

}

float obtenerInclinacionY(){
  mpu.getAcceleration(&ax, &ay, &az);
  float accel_ang_y=atan(ay/sqrt(pow(ax,2) + pow(az,2)))*(180.0/3.14);
  return accel_ang_y;
}