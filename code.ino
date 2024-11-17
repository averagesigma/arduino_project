void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  yoni_blink(8, 300);
}

void yoni_blink(int pin, int count) {
  // initialize the LED as an output
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
