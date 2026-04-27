int redLED = 2;
int greenLED = 3;
int buzzer = 6;
int ldr = A0;

int threshold = 600;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldr);

  if (lightValue < threshold) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
    Serial.println("DAY MODE");
  } else {
    Serial.println("NIGHT MODE");

    digitalWrite(greenLED, LOW);

    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);
  }

  delay(300);
}