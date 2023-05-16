// MAC de la placa: 0C:B8:15:C4:74:74

// #include <DallasTemperature.h>

// #include <OneWire.h>

//#include <RTClib.h>

#include <Wire.h>

#include "DHT.h"

#define DHTTYPE DHT11

const byte pinCaudal = 14;
const byte pinDHT = 12; //Es posible que se trate de un pin analógico.
const byte pinLDR = 2;
const byte pinHumedad = 4;
// const byte pinRTC = 7; //Quizás haya que crear otro del RTC
const byte pinTemperatura = 36;
const byte pinRele = 13;

int humedad_suelo;
int humedad_ambiente;
int temperatura_ambiente;
int luz;
int caudal;
int temperatura_suelo;

bool rtc_disponible = true;

String hora; //Utilizar String para obtener la hora completa. Buscar más información sobre Schedules con el RTC.

DHT dht(pinDHT, DHTTYPE);
//RTC_DS3231 rtc;
// OneWire oneWireBus(pinTemperatura);
// DallasTemperature sensor(&oneWireBus);

void setup()
{
  Serial.begin(9600);
  dht.begin();
  attachInterrupt(digitalPinToInterrupt(pinCaudal), ISRCountPulse, RISING);
  // sensor.begin(); 

  // if (rtc.lostPower()) {
  //   rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  // }

  pinMode(pinRele, OUTPUT);
}

void loop()
{
  humedad_suelo = medirHumedadSuelo();
  humedad_ambiente = medirHT("humedad");
  // temperatura_suelo = medirTemperaturaSuelo();
  temperatura_ambiente = medirHT("temperatura");
  luz = medirLuz();
  caudal = medirCaudal();

  // DateTime tiempo = rtc.now();


  if(humedad_suelo < 20)
  {

    activarBomba(true);

  }
  else
  {
    activarBomba(false);
  }
  enviarDatos(humedad_suelo, humedad_ambiente, temperatura_ambiente, caudal, luz, temperatura_suelo);

//   yield();
//   delay(10000);
  delay(1000);

}
