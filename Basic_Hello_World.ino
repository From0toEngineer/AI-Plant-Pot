#include <MCUFRIEND_kbv.h>
#include <Adafruit_GFX.h>

MCUFRIEND_kbv tft;

void setup() {
  Serial.begin(9600);
  uint16_t ID = tft.readID();
  tft.begin(ID);

  tft.setRotation(1);   // Landscape. Try 0 if you want Portrait.

  tft.fillScreen(0x0000); // Black background

  tft.setTextColor(0x07E0); // Green text
  tft.setTextSize(3);       // Medium-large text
  tft.setCursor(40, 120);   // x, y position
  tft.print("Hello World!");
}

void loop() {
  // Nothing
}
