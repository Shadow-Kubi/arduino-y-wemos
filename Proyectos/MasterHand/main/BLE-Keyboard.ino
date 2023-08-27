

void iniciarKeyboard() {
  pinMode(BUTTON1_PIN, INPUT_PULLUP);
  pinMode(BUTTON2_PIN, INPUT_PULLUP);
  pinMode(BUTTON3_PIN, INPUT_PULLUP);
  pinMode(BUTTON4_PIN, INPUT_PULLUP);

  Serial.println("Inicializando BLE-Keyboard");
  bleKeyboard.begin();
}

void accion1() {

  Serial.println("INICIO DE SESIÓN");
  bleKeyboard.write(KEY_RETURN);
  delay(500);
  bleKeyboard.write(KEY_RETURN);
  delay(500);
  bleKeyboard.print("366875");
  delay(5000);

}

void accion2() {
  
  Serial.println("PANTALLA DE INICIO");
  bleKeyboard.write(KEY_RETURN);
  delay(500);
  bleKeyboard.write(KEY_RETURN);
  delay(500);
  bleKeyboard.write(KEY_RETURN);
  delay(500);
  bleKeyboard.write(KEY_RETURN);
  delay(500);

}

void accion3() {

  Serial.println("MENSAJE DIRECT");
  bleKeyboard.write(KEY_TAB);
  delay(200);
  bleKeyboard.write(KEY_RIGHT_ARROW);
  delay(200);
  bleKeyboard.write(KEY_RIGHT_ARROW);
  delay(200);
  bleKeyboard.write(KEY_RIGHT_ARROW);
  delay(200);
  bleKeyboard.write(KEY_RIGHT_ARROW);
  delay(200);
  bleKeyboard.write(KEY_RIGHT_ARROW);
  delay(200);
  bleKeyboard.write(KEY_RIGHT_ARROW);
  delay(200);
  bleKeyboard.write(KEY_RETURN);
  delay(3000);
  // bleKeyboard.write(KEY_TAB);
  // delay(1000);
  bleKeyboard.write(KEY_UP_ARROW);
  delay(200);
  bleKeyboard.write(KEY_RIGHT_ARROW);
  delay(200);
  bleKeyboard.write(KEY_RIGHT_ARROW);
  delay(200);
  // bleKeyboard.write(KEY_RIGHT_ARROW);
  // delay(200);
  // bleKeyboard.write(KEY_RIGHT_ARROW);
  // delay(200);
  // bleKeyboard.write(KEY_RIGHT_ARROW);
  // delay(200);
  bleKeyboard.write(KEY_RETURN);
  delay(1000);
  bleKeyboard.write(KEY_RIGHT_ARROW);
  delay(200);
  bleKeyboard.write(KEY_RIGHT_ARROW);
  delay(200);
  bleKeyboard.write(KEY_DOWN_ARROW);
  delay(200);
  bleKeyboard.write(KEY_DOWN_ARROW);
  delay(200);
  bleKeyboard.write(KEY_LEFT_ARROW);
  delay(200);
  bleKeyboard.write(KEY_RETURN);
  delay(1000);
  bleKeyboard.print("HOLAA CHIQUITAA");
  delay(200);
  bleKeyboard.write(KEY_RETURN);
  delay(1000);

}

void accion4() {

  Serial.println("Sending Ctrl+Alt+Delete...");
  bleKeyboard.press(KEY_LEFT_CTRL);
  bleKeyboard.press(KEY_LEFT_ALT);
  bleKeyboard.press(KEY_DELETE);
  delay(100);
  bleKeyboard.releaseAll();

}