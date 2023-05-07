#include <NewPing.h>
#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial BT(10,11);
Servo myservo;

const int motor1Avance = 6 ;
const int motor1Atras = 5 ;
const int motor2Avance = 8;
const int motor2Atras = 9;
const int pinServo = 7;
const int UltrasonicPin = 3;

const int MaxDistance = 20;
int frecuenciaUS = 5;
NewPing sonar(UltrasonicPin, UltrasonicPin, MaxDistance);

char estado = 'a';
int distancia = 0;

void setup() {
myservo.attach (pinServo);
pinMode (motor1Avance, OUTPUT);
pinMode (motor1Atras, OUTPUT);
pinMode (motor2Avance, OUTPUT);
pinMode (motor2Atras, OUTPUT);

analogWrite(motor1Avance, 0);
analogWrite(motor1Atras, 0);
analogWrite(motor2Avance, 0);
analogWrite(motor2Atras, 0);
Serial.begin(9600);
BT.begin(9600);
}

void loop() {
  if (BT.available())
  {
    estado = BT.read();
  }
  // distancia = sonar.ping_cm();
  

  
  if (estado=='c')
  {
    Stop();
  }
  else if (estado =='a')
  {
    Adelante();
    if (distancia < 15 && distancia != 0)
    {
      Serial.print(distancia);
      Serial.println("cm");
      Atras();
      delay(2000);
      Derecha();
      delay(1000);
      Adelante();
      frecuenciaUS = 5;
    }
  }

  if(estado=='d')
  {
    Derecha();
  }

  else if(estado=='b')
  {
    Izquierda();
  }
  else if(estado=='e')
  {
    Atras();
  }
  delay(100);
  if(frecuenciaUS == 0){frecuenciaUS = 5;}
  frecuenciaUS--;
  Serial.println(frecuenciaUS);
}

void Adelante()
{
  analogWrite(motor1Avance, 255);
  analogWrite(motor1Atras, 0);
  analogWrite(motor2Avance, 255);
  analogWrite(motor2Atras, 0);
  Serial.println("adelante");
  myservo.write(90);
}

void Derecha()
{
  analogWrite(motor1Avance, 255);
  analogWrite(motor1Atras, 0);
  analogWrite(motor2Avance, 255);
  analogWrite(motor2Atras, 0);
  Serial.println("derecha");
  myservo.write(0);
}

void Izquierda()
{
  analogWrite(motor1Avance, 255);
  analogWrite(motor1Atras, 0);
  analogWrite(motor2Avance, 255);
  analogWrite(motor2Atras, 0);
  Serial.println("izquierda");
  myservo.write(180);
}

void Atras()
{ 
  analogWrite(motor1Avance, 0);
  analogWrite(motor1Atras, 255);
  analogWrite(motor2Avance, 0);
  analogWrite(motor2Atras, 255);
  Serial.println("atras");
  myservo.write(90);
}

void Stop()
{   
  analogWrite(motor1Avance, 0);
  analogWrite(motor1Atras, 0);
  analogWrite(motor2Avance, 0);
  analogWrite(motor2Atras, 0);
  Serial.println("parado");
  myservo.write(90);
}

