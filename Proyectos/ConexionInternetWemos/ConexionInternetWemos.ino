
#include "config.h"

const byte pinRele = 12; 

AdafruitIO_Feed *dato_rele = io.feed("rele");


int n;
String dato;

void setup()
{
  // Intentar conectar a Adafruit
  io.connect();

  dato_rele->onMessage(handleMessage);

  while (io.status() < AIO_CONNECTED)
  {
    delay(500);
  }

  dato_rele->get();

  Serial.println(io.statusText());
}

void loop()
{

  // Dejar que Adafruit haga sus cosas...
  io.run();

  //datoAdafruit->save(dato); // Utiliza esto en caso de que quieras enviar datos a Adafruit.
  Serial.print("El relé está");
  Serial.println(dato_rele->get());


  delay(3000);
}

void handleMessage(AdafruitIO_Data *data) {

  Serial.print("received <- ");
  Serial.println(data->value());

}