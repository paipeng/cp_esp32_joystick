
#define VRX 32
#define VRY 33
#define BUTTON 35



void setup() {
  Serial.begin(115200);
  pinMode(BUTTON, INPUT);

}

void readAnalog() {
  // x,y: 0-4095 (right - left; center 2877)
  // k: 1 unpressed; 0: pressed
  int x = analogRead(VRX);
  int y = analogRead(VRY);
  int k = digitalRead(BUTTON);

  Serial.print("Joystick: ");
  Serial.printf("x: %4d y: %4d button: %d", x, y, k);
  Serial.println("");
}

void loop() {
  readAnalog();
  delay(100);
}
