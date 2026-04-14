#define TRIG_PIN 9
#define ECHO_PIN 10
#define BUZZER 7
#define RELAY 8

long duration;
int distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(RELAY, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Trigger ultrasonic
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;

  Serial.println(distance);

  if (distance < 20) { // threshold (20 cm)
    digitalWrite(BUZZER, HIGH);
    digitalWrite(RELAY, HIGH);
  } else {
    digitalWrite(BUZZER, LOW);
    digitalWrite(RELAY, LOW);
  }

  delay(500);
}