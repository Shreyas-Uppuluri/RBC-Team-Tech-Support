#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8
int frequency = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  
  // Setting frequency-scaling to 20%
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    // Setting red filtered photodiodes to be read
    int R, G, B;
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);

  // Reading the output frequency
  R = pulseIn(sensorOut, LOW);

  // Printing the value on the serial monitor
  Serial.print("R= ");         //printing name
  Serial.print(R);     //printing RED color frequency
  Serial.print("  ");
  delay(1000);

  // Setting Green filtered photodiodes to be read
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);

  // Reading the output frequency
  G = pulseIn(sensorOut, LOW);

  // Printing the value on the serial monitor
  Serial.print("G= ");          //printing name
  Serial.print(G);      //printing GREEN color frequency
  Serial.print("  ");
  delay(1000);

  // Setting Blue filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);

  // Reading the output frequency
  B = pulseIn(sensorOut, LOW);

//   Printing the value on the serial monitor
    Serial.print("B= ");          //printing name
    Serial.print(B);      //printing RED color frequency
    Serial.println("  ");
  delay(1000);
  // RED ONLY: R = 30s, G=40s, B = 30-40
  // GREEN ONLY: R= 40s,G = 34-37, B = 32-34 
  // BLUE ONLY: R= 40-45, G=41-42, B = 25-30s
//  if ( R < 40) {
//    Serial.println("Color is RED");
//  } else {
//    if (G > 40 &&  B < 30) {
//        Serial.println("Color is BLUE");
//    } else {
//        Serial.println("Color is GREEN");
//    }
//  }
}
