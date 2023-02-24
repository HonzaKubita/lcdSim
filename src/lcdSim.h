#ifndef lcdSim_h
#define lcdSim_h

#include <iostream>
#include <string>
#include <vector>

class lcdSim {
  public:
    lcdSim(int screenWidth, int screenHeight);
    void render();
    void print(const std::string& text);
    void setCursor(int x, int y);

  private:
    int cursorX;
    int cursorY;
    int width;
    int height;
    std::vector<std::vector<char>> data;
};

#endif /* LCD_SIM_H */