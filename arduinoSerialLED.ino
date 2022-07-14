//Serial LED ON/OFF
/*
 * Was designed using ESP32. Change LED to desired pin.
 */

const int LED=2;
char data;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();
    if(data == '1'){
      digitalWrite(LED, HIGH);
      Serial.println("LED ON");
    }
    else if(data == '0'){
      digitalWrite(LED, LOW);
      Serial.println("LED OFF");
    }
  }
  
}
