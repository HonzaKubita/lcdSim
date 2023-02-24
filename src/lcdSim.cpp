#include "lcdSim.h"
#include <iostream>
#include <string>
#include <vector>

lcdSim::lcdSim(int screenWidth, int screenHeight) {
  width = screenWidth;
  height = screenHeight;

  cursorX = 0;
  cursorY = 0;

  data.resize(screenWidth);
  for (int i = 0; i < screenWidth; i++) {
    data[i].resize(screenHeight);
  }
}

void lcdSim::render() {

  for(int i = 0; i < width + 2; i++) {
    std::cout << "=";
  }

  std::cout << "\n";

  for (int i = 0; i < height; i++) {

    std::cout << "|";

    for (int j = 0; j < width; j++) {
      if (data[j][i]) {
        std::cout << data[j][i];
      } else {
        std::cout << " ";
      }
    }

    std::cout << "|\n";
  }

  for(int i = 0; i < width + 2; i++) {
    std::cout << "=";
  }

  std::cout << "\n";
}

void lcdSim::print(const std::string& text) {

  for (int i = 0; i < text.size(); i++) {
    if ((cursorX + i) <= width) {
      data[cursorX + i][cursorY] = text[i];
    }
  }
}

void lcdSim::setCursor(int x, int y) {
  if (x > width) {
    cursorX = width;
  } else if (x < 0) {
    cursorX = 0;
  } else {
    cursorX = x;
  }

  if (y > height) {
    cursorY = height;
  } else if (y < 0) {
    y = 0;
  } else {
    cursorY = y;
  }
}