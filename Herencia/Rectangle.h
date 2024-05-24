#pragma once
#include "Shape.h"

class Rectangle : public Shape {
  private:
    int l,h;
  public:
    Rectangle();
    Rectangle(int,int);
    Rectangle(int,int,int,int);
    ~Rectangle();
    std::string draw();
};