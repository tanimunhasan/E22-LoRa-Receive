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
      delay(100);
      Serial.println("Light on");

    }

    else if (data == "b") {
      digitalWrite(4, 0);

    }
    Serial.print("data");
    Serial.println(data);

  }

  // put your main code here, to run repeatedly:

}
