const int led[4] = {2, 3, 4, 5};
const int buttonPin = 6;
bool buttonState;
int x = 0;

void setup() {
  Serial.begin(9600);

  for (int y = 0; y < 4; y++) {
    pinMode(led[y], OUTPUT);
  }

  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  delay(300);

  if (buttonState == 1) {
    x++;
    switch (x) {
      case 1:
        digitalWrite(led[0], HIGH);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], LOW);
        digitalWrite(led[3], LOW);
        break;
      case 2:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], HIGH);
        digitalWrite(led[2], LOW);
        digitalWrite(led[3], LOW);
        break;
      case 3:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], HIGH);
        digitalWrite(led[3], LOW);
        break;
      case 4:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], LOW);
        digitalWrite(led[3], HIGH);
        break;
      default:
        digitalWrite(led[0], LOW);
        digitalWrite(led[1], LOW);
        digitalWrite(led[2], LOW);
        digitalWrite(led[3], LOW);
        x = 0;
        break;
    }

  }
}
