#pragma once
#include <string>

class Shape {
  private:
    int x;
    int y;
  public:
    Shape();
    Shape(int,int);
    virtual ~Shape();

    int getValX();
    int getValY();
    virtual std::string draw();
};