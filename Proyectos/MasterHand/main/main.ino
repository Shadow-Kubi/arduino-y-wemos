int mousex;
int mousey;

#include <BleMouse.h>
BleMouse bleMouse;

#include <BleKeyboard.h>

BleKeyboard bleKeyboard;

#define BUTTON1_PIN 12
#define BUTTON2_PIN 14
#define BUTTON3_PIN 27
#define BUTTON4_PIN 26

void setup() {

  Serial.begin(9600);

  iniciarKeyboard();
  //iniciarMouse();
  iniciarMPU();

}

void loop() {

  // mousex = map(obtenerInclinacionX(), -85, 85, 0, 1080); // map(value, fromLow, fromHigh, toLow, toHigh) para mapear los valores (de 85 a 1080, pe.)
  // mousey = map(obtenerInclinacionY(), -85, 85, 0, 1920);

  // bleMouse.move(mousex,mousey,0);
  
  if(bleKeyboard.isConnected() && digitalRead(BUTTON1_PIN) == LOW){
    accion1();
  }

  if(bleKeyboard.isConnected() && digitalRead(BUTTON2_PIN) == LOW){
    accion2();
  }

  if(bleKeyboard.isConnected() && digitalRead(BUTTON3_PIN) == LOW){
    accion3();
  }

  if(bleKeyboard.isConnected() && digitalRead(BUTTON4_PIN) == LOW){
    accion4();
  }

  delay(200);
}