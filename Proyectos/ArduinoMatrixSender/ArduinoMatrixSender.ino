///
/// ArduinoMatrixController - Creado por Miguel Gutiérrez
/// Este programa traduce los paquetes de 8bytes que llegan al puerto serie a
/// instrucciones que recibe la Matriz de Leds de 8x8.
///
/// Está diseñado para ser utilizado con la aplicación para Windows "ArduinoMatrixSender",
/// la cual está lista para ser compilada utilizando los archivos del zip y Visual Studio.
/// Es imperativo cerrar el Arduino IDE antes de ejecutar la aplicación. Esto será arreglado posteriormente.
///
/// Además, existe la posibilidad de conectarle un sensor Bluetooth HC-06 para poder enviar
/// datos utilizando la aplicación para Android "Matrix Controller", cuyo apk también se
/// encuentra en el zip.
///

#include <LedControl.h>

// Ambas librerías están en el zip. Solo hay que instalarlas y reiniciar el Arduino IDE.
// Es posible que la librería SoftwareSerial venga instalada por defecto.


// LedControl(DIN,CLK,CS,0)
LedControl LedControl(2,4,3,0);

String dato_recibido = "1100001110000001000000000000000000000000000000001000000111000011";
// Por defecto, la matriz enciende las esquinas para comprobar que funciona correctamente.

String fila0, fila1, fila2, fila3, fila4, fila5, fila6, fila7, serial_data;

bool b;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial.setTimeout(100);
  Serial1.setTimeout(100);

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  LedControl.shutdown(0,false);
  LedControl.setIntensity(0,8);
  LedControl.clearDisplay(0);

  fila0 = dato_recibido.substring(0,8);
  fila1 = dato_recibido.substring(8,16);
  fila2 = dato_recibido.substring(16,24);
  fila3 = dato_recibido.substring(24,32);
  fila4 = dato_recibido.substring(32,40);
  fila5 = dato_recibido.substring(40,48);
  fila6 = dato_recibido.substring(48,56);
  fila7 = dato_recibido.substring(56);
}

void loop(){
  receiveData(Serial.readStringUntil('\n')); // Recibimos dato del SerialPort.
  receiveData(Serial1.readStringUntil('\n'));
  draw(); // Encendemos los leds correspondientes.
}

void receiveData(String received){ // Función que recibe y guarda las intrucciones.

  // if(Serial.readString() == "")
  // {
  //   serial_data = Serial1.readStringUntil('\n');
  //   Serial.print("Listening to Serial1: ");
  //   Serial.println(Serial1.readString());
  // }
  // else
  // {
  //   serial_data = Serial.readStringUntil('\n');
  //   Serial.print("Listening to Serial: ");
  //   Serial.println(Serial.readString());
  // }


  // if (b == false)
  // {
  //   b = true;
  //   serial_data = Serial.readStringUntil('\n');
  //   Serial.println("Listening to Serial");
  // }
  // else
  // {
  //   b = false;
  //   serial_data = Serial1.readStringUntil('\n');
  //   Serial.println("Listening to Serial");
  // }
    
  if(received.length() == 64) // Comprobamos que el dato mide 8 bytes.
  {
    dato_recibido = received;

    fila0 = dato_recibido.substring(0,8); // Partimos el dato recibido en 8 bytes distintos: uno para cada fila.
    fila1 = dato_recibido.substring(8,16);
    fila2 = dato_recibido.substring(16,24);
    fila3 = dato_recibido.substring(24,32);
    fila4 = dato_recibido.substring(32,40);
    fila5 = dato_recibido.substring(40,48);
    fila6 = dato_recibido.substring(48,56);
    fila7 = dato_recibido.substring(56);

  }
}

void draw() // Enciende las luces correspondientes siguiendo las instrucciones que se hayan recibido.
{

  byte filas[8] = // Hacemos una lista para acceder más cómodamente a cada byte (Opcional)
  {
    binaryStringByteToDecimal(fila0), // Utilizamos binaryStringByteToDecimal() para pasar
    binaryStringByteToDecimal(fila1), // el número del sistema binario al decimal, ya que LedControl lo quiere
    binaryStringByteToDecimal(fila2), // en este sistema numérico.
    binaryStringByteToDecimal(fila3),
    binaryStringByteToDecimal(fila4),
    binaryStringByteToDecimal(fila5),
    binaryStringByteToDecimal(fila6),
    binaryStringByteToDecimal(fila7)
  };

  LedControl.setRow(0,0,filas[0]);  // Encendemos cada fila según indique el byte correspondiente.
  LedControl.setRow(0,1,filas[1]);
  LedControl.setRow(0,2,filas[2]);
  LedControl.setRow(0,3,filas[3]);
  LedControl.setRow(0,4,filas[4]);
  LedControl.setRow(0,5,filas[5]);
  LedControl.setRow(0,6,filas[6]);
  LedControl.setRow(0,7,filas[7]);

}

byte binaryStringByteToDecimal(String text) // Función para pasar bytes de binario a decimal.
{
  byte valor;
  char toBinary[9];

  text.toCharArray(toBinary,9);

  String num0 = String(toBinary[0]);
  String num1 = String(toBinary[1]);
  String num2 = String(toBinary[2]);
  String num3 = String(toBinary[3]);
  String num4 = String(toBinary[4]);
  String num5 = String(toBinary[5]);
  String num6 = String(toBinary[6]);
  String num7 = String(toBinary[7]);

  valor = num0.toInt() * 128 + num1.toInt() * 64 + num2.toInt() * 32 + num3.toInt() * 16 + num4.toInt() * 8 + num5.toInt() * 4 + num6.toInt() * 2 + num7.toInt() * 1;

  return valor;
}

