// MAC de la placa: 0C:B8:15:C4:74:74

#include <DallasTemperature.h>
#include <OneWire.h>
#include <Wire.h>
#include "DHT.h"
#include "D:\Users\migue\Documents\arduino-y-wemos\Proyectos\InvernaderoInteligente\main\config.h"

// Llamamos a todos los feeds de Adafruit IO:

AdafruitIO_Feed *a_humedad_suelo = io.feed("dato_humedad_suelo");
AdafruitIO_Feed *a_humedad_ambiente = io.feed("dato_humedad_ambiente");
AdafruitIO_Feed *a_temperatura_suelo = io.feed("dato_temperatura_suelo");
AdafruitIO_Feed *a_temperatura_ambiente = io.feed("dato_temperatura_ambiente");
AdafruitIO_Feed *a_luz = io.feed("dato_luz");
AdafruitIO_Feed *a_rele = io.feed("activar_bomba");


#define DHTTYPE DHT11 // Definimos el tipo de Sensor DHT que estemos usando
#define IO_LOOP_DELAY 10000 // Definimos el tiempo de delay del bucle
unsigned long lastUpdate = 0;


// Declaramos los pines que vamos a utilizar.

const byte pinDHT = 12;
const byte pinHumedad = 39;
const byte pinTemperatura = 16;
const byte pinLDR = 34;
const byte pinReleB = 13;
const byte pinReleV = 14;

// Declaramos todas las variables de datos.

int humedad_suelo;
int humedad_ambiente;
int temperatura_suelo;
int temperatura_ambiente;
int luz;
bool rele;

DHT dht(pinDHT, DHTTYPE); // Creamos el objeto del DHT
OneWire oneWireBus(pinTemperatura); // Creamos el objeto del sensor de Temperatura del Suelo
DallasTemperature sensor(&oneWireBus);



void setup()
{
  Serial.begin(9600); // Inicializamos el Puerto Serie
  dht.begin(); // Inicializamos el DHT
  sensor.begin();  //Inicializamos el sensor de Temperatura del Suelo

  pinMode(pinReleB, OUTPUT); // Activamos los pines de relé como SALIDA
  pinMode(pinReleV, OUTPUT);

  io.connect(); // Inicializamos la conexión con Adafruit IO
  a_rele->onMessage(datoRecibido); // Hacemos "listen" a la feed del relé

  Serial.println();

  while(io.status() < AIO_CONNECTED) { // Esperamos hasta conectarnos
    Serial.print(".");
    delay(500);
  }

  Serial.println();
  Serial.println(io.statusText());

  a_rele->get(); // Hacemos "listen" a la feed del relé
}

void loop()
{
  io.run(); // Dejamos que el cliente permanezca conectado a Adafruit IO



  if (millis() > (lastUpdate + IO_LOOP_DELAY)) {


    humedad_suelo = medirHumedadSuelo();
    humedad_ambiente = medirHT("humedad");
    temperatura_suelo = medirTemperaturaSuelo();
    temperatura_ambiente = medirHT("temperatura");
    luz = medirLuz();

    a_humedad_suelo->save(humedad_suelo);
    a_humedad_ambiente->save(humedad_ambiente);
    a_temperatura_suelo->save(temperatura_suelo);
    a_temperatura_ambiente->save(temperatura_ambiente);
    a_luz->save(luz);

    enviarPuertoSerie(humedad_suelo, humedad_ambiente, temperatura_suelo, temperatura_ambiente, luz);

    if(humedad_suelo < 20)
    {

      activarBomba(true);
      delay(1000); // OJITO CON LOS DELAY(): FUNCIÓN EXPERIMENTAL
      activarBomba(false);

    }
    else
    {
      activarBomba(false);
    }

    if(temperatura_ambiente > 35)
    {

      activarVentilacion(true);

    }
    else
    {
      activarVentilacion(false);
    }

    // after publishing, store the current time
    lastUpdate = millis();
  }
}

void datoRecibido(AdafruitIO_Data *data) {

  rele = String(data->value()).toInt();

}