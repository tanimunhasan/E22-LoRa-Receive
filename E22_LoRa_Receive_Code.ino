/*
------- Pin Connection ----------- Receiving End-----------------
M0 --------- 5V
M1 --------- GND
RX --------- TX
TX --------- RX
VCC -------- 5V
GND -------- GND

*/
int pin = 4;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  Serial.println("OK");
  pinMode(4, OUTPUT);
}

void loop() {

  if (Serial.available() > 0) {
    String data = Serial.readString();
    if (data == "LED") {
      digitalWrite(4, HIGH);
      delay(1000);
      Serial.println("Light on");
      digitalWrite(4, LOW);
      delay(1000);
      Serial.println("Light off");

    }

    else if (data == "b") {
      digitalWrite(4, 0);

    }
    Serial.print("data");
    Serial.println(data);

  }

  // put your main code here, to run repeatedly:

}
