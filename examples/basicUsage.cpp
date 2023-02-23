#include "lcdSim.h"

int main() {
  // create an lcdSim object with a screen size of 20x10
  lcdSim lcd(20, 10);

  // set the cursor position to (2, 2)
  lcd.setCursor(2, 2);

  // print some text starting from the current cursor position
  lcd.print("Hello, world!");

  // render the screen to the console
  lcd.render();

  return 0;
}