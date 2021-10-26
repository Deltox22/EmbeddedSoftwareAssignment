#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW
#define MAX_DEVICES 11

#define CLK_PIN   13
#define DATA_PIN  11
#define CS_PIN    10

MD_Parola P = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

int ldrValue;
int brightness;

void setup() {
  P.begin();
  Serial.begin(9600);
  pinMode(5,OUTPUT);

}

void loop() {

  if (P.displayAnimate())
    P.displayText("Hello", PA_CENTER, P.getSpeed(), P.getPause(), PA_SCROLL_DOWN, PA_SCROLL_UP);
  ldrValue = analogRead(A0);
  Serial.println(ldrValue);

  delay(20);

  brightness = map(ldrValue, 0, 1023, 255, 0);
  analogWrite(5, brightness); 
  Serial.println(brightness);

}
