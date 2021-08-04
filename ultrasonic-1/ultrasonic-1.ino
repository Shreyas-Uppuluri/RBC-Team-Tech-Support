void setup() {
  // put your setup code here, to run once:
  const int trigPin = 10;
  const int echoPin = 9;
  const int ledR = 3;
  const int ledB = 13;
  const int ledG = 12;
  
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(ledR, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledR, OUTPUT);
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
  // defines pins numbers
  const int trigPin = 10;
  const int echoPin = 9;
  const int ledR = 3;
  const int ledB = 13;
  const int ledG = 12;
  
  // defines variables
  long duration;
  int distance;
    // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
    distance= duration*0.034/2;
    digitalWrite(ledR, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(ledG, LOW);

    if (distance <= 5) {
       digitalWrite(ledR, HIGH);
    } else if (distance <= 10) {
        digitalWrite(ledG, HIGH);
    } else {
        digitalWrite(ledB, HIGH); 
    }

    // Prints the distance on the Serial Monitor
    Serial.print("Distance: ");
    Serial.println(distance);
}
