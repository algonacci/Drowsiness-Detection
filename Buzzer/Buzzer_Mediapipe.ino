const int buzzer = 11;
String data_serial_receive;
const int led = 13;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  if (Serial.available() > 0) {
    data_serial_receive = Serial.readStringUntil('\n');

    if (data_serial_receive == "1") {
      digitalWrite(buzzer, LOW);
      digitalWrite(led, LOW);
    }
    if (data_serial_receive == "0") {
      //delay(1000);
      digitalWrite(buzzer, HIGH);
      digitalWrite(led, HIGH);
    }
  }
}
