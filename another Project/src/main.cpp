/*
Experiment 1: Analog Read Serial 5 Values

OCADU DIGF-6037 Creation & Computation - taught by Kate Hartman & Nick Puckett
Based on: https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial


*/

const int NUM_SENSORS = 5;
int sensorPins[NUM_SENSORS] = {A0, A1, A2, A3, A4};
int sensorValues[NUM_SENSORS];

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {

  // Read all sensors into array
  for (int i = 0; i < NUM_SENSORS; i++) {
    sensorValues[i] = analogRead(sensorPins[i]);
  }

  // Print sensor values in CSV format
  for (int i = 0; i < NUM_SENSORS; i++) {
    Serial.print(sensorValues[i]);
    if (i < NUM_SENSORS - 1) {
      Serial.print(", ");
    }
  }
  Serial.println();

  delay(50);  // delay in between reads for stability
}