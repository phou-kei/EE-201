// https://wokwi.com/projects/346613206492381778
// hi
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // set up Serial monitor
  pinMode(13, OUTPUT);

}

void loop() { // between 0-1023
  // put your main code here, to run repeatedly:

  int sensorValue = analogRead(A0);

  digitalWrite(13, HIGH);
  delay(sensorValue/2);
  digitalWrite(13, LOW);
  delay(sensorValue/2);

  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);

}
