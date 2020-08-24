#include <Arduino.h>

void setup() {
  Serial.begin(9600);

}

void loop() {
 long hallValue= hallRead();
 Serial.println(hallValue);
 delay(2000);
}