#define TRIG_PIN 9
#define ECHO_PIN 10
#define BUZZER 7
#define RELAY 8

// Speed of sound in air = 0.034 cm/us
// Divided by 2 because signal travels to object and back
const float SOUND_SPEED_FACTOR = 0.034 / 2.0;

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
  // Trigger ultrasonic sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  // Read echo time
  duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance
  distance = duration * SOUND_SPEED_FACTOR;

  Serial.println(distance);

  // Threshold condition
  if (distance < 20) { // 20 cm
    digitalWrite(BUZZER, HIGH);
    digitalWrite(RELAY, HIGH);
  } else {
    digitalWrite(BUZZER, LOW);
    digitalWrite(RELAY, LOW);
  }

  delay(500);
}
