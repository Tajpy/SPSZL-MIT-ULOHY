
int led = 6;
int hodnotapot;


void setup() {

  pinMode(A0, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  hodnotapot = analogRead(A0);
  hodnotapot = map(hodnotapot, 0, 1023, 0, 255);
  Serial.println(hodnotapot);

  for(int i = 1; i <= 255; i++) {
    analogWrite(led, i);
    hodnotapot = analogRead(A0);
    hodnotapot = map(hodnotapot, 0, 1023, 0, 255);
    Serial.println(hodnotapot);
    delay(2 + hodnotapot/20);
  }
  for (int i = 255; i >= 1; i--) {
    analogWrite(led, i);
    hodnotapot = analogRead(A0);
    hodnotapot = map(hodnotapot, 0, 1023, 0, 255);
    Serial.println(hodnotapot);
    delay(2 + hodnotapot/20);
  }
  delay(20);
  
}
