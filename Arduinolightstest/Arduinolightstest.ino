#include <Adafruit_DotStar.h>


#define NUMPIXELS 21
#define DATAPIN 5
#define CLOCKPIN 6

Adafruit_DotStar strip(NUMPIXELS, DATAPIN, CLOCKPIN, DOTSTAR_BGR);

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show();
 
}

void loop() {
   //building purple
  for (int b=0; b <=100; b+=20) {
    for (int p=1; p<=NUMPIXELS; p++){
      strip.setPixelColor(p, b, 0, b);
      strip.show();
      delay(15);
    }}
    for (int b=b; b >=1; b-=10) {
      for (int p=1; p<=NUMPIXELS; p++){
        strip.setPixelColor(p, b, 0, b);
        strip.show();
        delay(15);
      }
    }
    
/*
      for (int p=1; p<=NUMPIXELS; p++) {
      strip.setPixelColor(p,random(1,255),0,random(1,255));
       }
       strip.show();
       delay(100);
    */
    //red fade (broken)
  /*for (int r=0; r <100; r+=5){
    for (int p=1; p<=NUMPIXELS; p++){
      strip.setPixelColor(p, r, 0,0);
      
    }
  }
    strip.show();
    delay(100);
     for (int r=100; r >100; r-=5){
    for (int p=1; p<=NUMPIXELS; p++){
      strip.setPixelColor(p, r, 0,0);
      
    }
    strip.show();
    delay(100);
   
  }*/










    
}
