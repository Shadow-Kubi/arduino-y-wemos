#include "C:\Users\Shadow_Kubi\Documents\GitHub\arduino-y-wemos\Proyectos\ConexionInternetWemos\EjemploSubirDato\config.h"

float random_float = 0;

AdafruitIO_Feed *dato_adafruit = io.feed("Dato1"); //Importante para inicializar feeds de Adafruit en Arduino.
//En este ejemplo, el feed "Dato1" se guarda en la variable "dato_adafruit".

void setup() {
  Serial.begin(9600);
  while(!Serial);
  Serial.println();
  Serial.print("Conectando a Adafruit IO");
  io.connect();

  while(io.status() < AIO_CONNECTED) {
  Serial.print(".");
  delay(500);

  } //Se puede tranformar en for, hacer break cuando conecte, y lanzar error con soluciones si no conecta.
  Serial.println();

  Serial.println("Se ha conectado correctamente.");
}

void loop() {
  io.run(); //Cositas que hace Adafruit IO. No me preguntes. Tiene que estar siempre justo al empezar el loop.

  random_float = random_float + random(-1,2);

  dato_adafruit->save(random_float); //Esta instrucción sube el valor de la variable de Arduino al feed de Adatruit.
  //En este ejemplo, el valor de "random_int" se guardará en el feed al que esté vinculado "dato_adafruit" (depende de la inicialización de arriba).

  Serial.print("El número actual es: ");
  Serial.println(random_float);

  delay(3000);

}
