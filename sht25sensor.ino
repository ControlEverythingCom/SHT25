// This #include statement was automatically added by the Particle IDE.
#include "SHT25.h"

SHT25 sensor;

double humidity;
double cTemp;
double fTemp;

void setup() {
    Wire.begin();
    Particle.variable("Humidity", humidity);
    Particle.variable("Temperature", fTemp);
}

void loop() {
    humidity = sensor.readHumidity();
    fTemp = sensor.readTempF();
}