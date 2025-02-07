#include <Arduino.h>
#include <Wire.h>
#define SLAVE_ADDR 9

#define ANSWERSIZE 5

int value = 65;

void setup() {
  Wire.begin(); // Start I2C as Master
  Serial.begin(9600); // Start serial communication for debugging
}

void loop() {
  delay(50);
  Serial.println("Write data to slave");
  Wire.beginTransmission(SLAVE_ADDR); // Start communication with slave address 8
  Wire.write(value); // Send data to slave
  Wire.endTransmission(); // End transmission

  Serial.println("RECEIVE DATA");
  Wire.requestFrom(SLAVE_ADDR, ANSWERSIZE);
  Serial.print("the send data is:");
  Serial.println(value);

  String response = "";
  while (Wire.available()){
    char b = Wire.read();
    response += b;
  }
  Serial.println(response);

  
  delay(1000); // Wait for 1 second
}
