void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT_PULLUP);
  Serial.begin(115200);


}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8) == 0){
  }
}

void yoni_blink(int pin, int count, int count_flash) {
  // initialize the LED as an output
  for (int i = 0; i < count_flash; i++){
    pinMode(pin, OUTPUT);

    // tunr on the LED
    digitalWrite(pin, HIGH);

    // wait for a set amount of milliseconds
    delay(count);

    // turn the LED off 
    digitalWrite(pin, LOW);

    // wait for a set amount of milliseconds
    delay(count);
  }
}
