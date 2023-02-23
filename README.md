# lcdSim C++ Library

The lcdSim library provides a simple LCD screen simulation for use in console applications. This library allows users to simulate an LCD screen by rendering it to console.

## Usage
To use the library just download the source files and include the `lcdSim.h` in our c++ program.

## Constructor
To create an lcdSim object, you will need to call its constructor and specify the screen width and height. For example:

```c++
lcdSim myScreen(20, 10);
```

This will create an lcdSim object with a screen size of 20 columns by 10 rows.

## Rendering
To render the contents of the lcdSim object to the console, call its render method. This will print the contents of the screen to the console. For example:

```c++
myScreen.render();
```

## Printing Text
To print text to the screen, call the print method and pass in the text to be printed. For example:

```c++
myScreen.print("Hello, World!");
```

## Setting the Cursor Position
To set the cursor position on the screen, call the setCursor method and pass in the desired x and y coordinates. For example:

```c++
myScreen.setCursor(5, 2);
```

## Example
Here is an example of how to use the lcdSim library to print text to the screen:

```c++
#include "lcdSim.h"

int main() {
    lcdSim myScreen(20, 10);
    myScreen.print("Hello, World!");
    myScreen.render();
    return 0;
}
```
