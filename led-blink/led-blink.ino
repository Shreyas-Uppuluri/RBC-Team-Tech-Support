void setup() {
  Serial.begin(9600);

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // defines pins numbers
  const int trigPin = 10;
  const int echoPin = 9;
  
  // defines variables
  long duration;
int distance;
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  Serial.println("LED is ON!");
  delay(500);                        // wait for half a second

  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  Serial.println("LED is OFF!");
  delay(500);                        // wait for half a second
}
