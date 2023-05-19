// MAC de la placa: 0C:B8:15:C4:74:74

#include <DallasTemperature.h>

#include <OneWire.h>

//#include <RTClib.h>

#include <Wire.h>

#include "DHT.h"

#include "C:\Users\ACER-TALLER\Documents\Shadow_Kubi\arduino-y-wemos\Proyectos\JardinInteligente\main\config.h"

AdafruitIO_Feed *a_humedad_suelo = io.feed("dato_humedad_suelo");
AdafruitIO_Feed *a_humedad_ambiente = io.feed("dato_humedad_ambiente");
AdafruitIO_Feed *a_temperatura_suelo = io.feed("dato_temperatura_suelo");
AdafruitIO_Feed *a_temperatura_ambiente = io.feed("dato_temperatura_ambiente");
AdafruitIO_Feed *a_caudal = io.feed("dato_caudal");
AdafruitIO_Feed *a_luz = io.feed("dato_luz");
AdafruitIO_Feed *a_rele = io.feed("activar_bomba");


#define DHTTYPE DHT11



const byte pinCaudal = 14;
const byte pinDHT = 12; //Es posible que se trate de un pin analógico.
const byte pinLDR = 2;
const byte pinHumedad = 4;
// const byte pinRTC = 7; //Quizás haya que crear otro del RTC
const byte pinTemperatura = 16;
const byte pinRele = 13;

int humedad_suelo;
int humedad_ambiente;
int temperatura_ambiente;
int luz;
int caudal;
int temperatura_suelo;
byte rele;

bool rtc_disponible = true;

String hora; //Utilizar String para obtener la hora completa. Buscar más información sobre Schedules con el RTC.

DHT dht(pinDHT, DHTTYPE);
//RTC_DS3231 rtc;
OneWire oneWireBus(pinTemperatura);
DallasTemperature sensor(&oneWireBus);

void setup()
{
  Serial.begin(9600);
  dht.begin();
  // attachInterrupt(digitalPinToInterrupt(pinCaudal), ISRCountPulse, RISING);
  sensor.begin(); 

  // if (rtc.lostPower()) {
  //   rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  // }

  pinMode(pinRele, OUTPUT);

  io.connect();
  a_rele->onMessage(handleMessage);

  // wait for a connection
  while(io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println(io.statusText());

  a_rele->get();
}

void loop()
{
  io.run();


  // caudal = medirCaudal();
  if (millis() > (lastUpdate + IO_LOOP_DELAY)) {
    // save count to the 'counter' feed on Adafruit IO


    humedad_suelo = medirHumedadSuelo();
    humedad_ambiente = medirHT("humedad");
    temperatura_suelo = medirTemperaturaSuelo();
    temperatura_ambiente = medirHT("temperatura");
    luz = medirLuz();

    a_humedad_suelo->save(humedad_suelo);
    a_humedad_ambiente->save(humedad_ambiente);
    a_temperatura_suelo->save(temperatura_suelo);
    a_temperatura_suelo->save(temperatura_ambiente);
    a_luz->save(luz);
    a_caudal->save(caudal);

    // after publishing, store the current time
    lastUpdate = millis();
  }
  // DateTime tiempo = rtc.now();


  if(humedad_suelo < 20)
  {

    activarBomba(true);

  }
  else
  {
    activarBomba(false);
  }

  enviarPuertoSerie(humedad_suelo, humedad_ambiente, temperatura_ambiente, caudal, luz, temperatura_suelo);

//   yield();
  delay(1000);

}

void handleMessage(AdafruitIO_Data *data) {

  rele = String(data->value()).toInt();

}