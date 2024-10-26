const int lm35_pin = 34;
const float factor = 0.080586;
void setup() {
  // put your setup code here, to run once:
  analogReadResolution(12);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float analogValue = analogRead(lm35_pin);
  float temp = (factor * analogValue);
  Serial.println("adc_value: " + String(analogValue) + "temperature: " + String(temp));

  delay(2000);
}
