

void iniciarMouse() {
  Serial.println("Inicializando BLE-Mouse");
  bleMouse.begin();
}

// void loop() {
//   if(bleMouse.isConnected()) {
//     Serial.println("Scroll Down");
//     bleMouse.move(0,0,-1);
//   }
//   delay(2000);
// }