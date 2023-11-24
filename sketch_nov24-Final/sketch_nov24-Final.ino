#include <Adafruit_NeoPixel.h>

#define LED_PIN    6
#define LED_COUNT 12

Adafruit_NeoPixel ring(LED_COUNT, LED_PIN, NEO_RGBW + NEO_KHZ800);

void setup() {
  ring.begin();           
  ring.show();            
  ring.setBrightness(50); 
}
void loop() {
  for(int i = 0; i < ring.numPixels(); i++){
    ring.setPixelColor(i, (150,0,0), (0,150,0), (0,0,150), 0);
    ring.show();
    delay(500);
  }
  for(int i = ring.numPixels()-1; i >= 0; i--){
    ring.setPixelColor(i, 0, 0, 0, 0);
    ring.show();
    delay(500);
  }
}