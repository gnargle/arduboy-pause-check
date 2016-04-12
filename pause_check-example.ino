#include "Arduboy.h"
#include "arduboy_pause_check.h"

Arduboy arduboy;

bool isPaused = false;

void setup() {
  // put your setup code here, to run once:
  arduboy.begin();
  arduboy.setFrameRate(30);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!(arduboy.nextFrame())) return;
  arduboy.clear();
  if (isPaused){
    arduboy.setCursor(0,0);
    arduboy.print("Paused");
  }
  isPaused = check_pause(arduboy, isPaused);
  arduboy.display();
}
