#pragma once
#include <string>

class Shape {
  private:
    int x;
    int y;
  public:
    Shape();
    Shape(int,int);
    ~Shape();

    int getValX();
    int getValY();
    std::string draw();
};