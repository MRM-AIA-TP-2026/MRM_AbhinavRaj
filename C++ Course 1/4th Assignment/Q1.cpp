#include <iostream>
#include "CTurtle.hpp"
#include "CImg.h"
using namespace cturtle;
using namespace std;

int main(int argc, char** argv) {

  TurtleScreen screen(400, 300); //You may edit the dimensions to fit your window
  Turtle tina(screen);
  tina.speed(TS_SLOWEST);

  //add code below this line

  int i = 0;
  for (i; i < 3; i++) {
    tina.forward(100);
    tina.left(120);
  }

  //add code above this line

  screen.exitonclick();
  return 0;

}
