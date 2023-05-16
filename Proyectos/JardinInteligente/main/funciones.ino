int fhumedad_suelo;
int fluz;
float fhumedad;
float ftemperatura;

float fcaudal;
const int measureInterval = 2500;
volatile int pulseConter;
const float factorK = 7.5;

int medirHumedadSuelo()
{
  fhumedad_suelo = map(analogRead(pinHumedad), 0, 4095, 0, 100); // map(value, fromLow, fromHigh, toLow, toHigh) para mapear los valores (de 4096 a 100, pe)

  //Serial.print("Humedad del suelo: ");
  //Serial. println(humedad_suelo);

  return fhumedad_suelo;
}

void abrirRele(bool open)
{
  if (open == true)
  {
      digitalWrite(pinRele, HIGH);
      //Serial.println("Relé abierto");
  }
  else
  {
      digitalWrite(pinRele, LOW);
      //Serial.println("Relé cerrado");
  }
}


float medirHT( String dato ) //Dato puede ser "temperatura" o "humedad"
{
  if(dato == "humedad")
  {
    fhumedad = dht.readHumidity();
    return fhumedad;
  }
  else if(dato == "temperatura")
  {
    ftemperatura = dht.readTemperature();
    return ftemperatura;
  }
}

int medirLuz()
{
  fluz = map(analogRead(pinLDR), 0, 4095, 0, 100); // map(value, fromLow, fromHigh, toLow, toHigh) para mapear los valores (de 4096 a 100, pe)
  return fluz;
}

double medirTemperaturaSuelo()
{
  sensor.requestTemperatures();
  return sensor.getTempCByIndex(0);
}

//Funciones para medir el caudal.

// float medirCaudal()
// {
//   fcaudal = GetFrequency() / factorK;
//   return fcaudal;


// }

// void ISRCountPulse()
// {
//   pulseConter++;
// }

// float GetFrequency()
// {
//   pulseConter = 0;

//   interrupts();
//   delay(measureInterval);
//   noInterrupts();

//   return (float)pulseConter * 1000 / measureInterval;
// }


int tiempoReal()
{}

void activarBomba( bool activa )
{
  if (activa)
  {
    digitalWrite(pinRele, HIGH);
  }
  else
  {
    digitalWrite(pinRele, LOW);
  }
}

void enviarDatos(int dhum_suelo, int dhum_amb, int dtemp_amb, int dcaudal, int dluz, int dtemp_suelo)
{

  //Serial.println(dtiempo);
  Serial.print("Humedad del suelo: ");
  Serial.println(dhum_suelo);
  Serial.print("Humedad del ambiente: ");
  Serial.println(dhum_amb);
  Serial.print("Temperatura del suelo: ");
  Serial.println(dtemp_suelo);
  Serial.print("Temperatura del ambiente: ");
  Serial.println(dtemp_amb);
  Serial.print("Caudal: ");
  Serial.println(dcaudal);
  Serial.print("Luz: ");
  Serial.println(dluz);


}