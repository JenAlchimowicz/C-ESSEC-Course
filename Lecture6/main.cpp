#include<iostream>
#include "shape.cpp"
#include "circle.cpp"
#include "rectangle.cpp"
#include "square.cpp"
using namespace std;

int main(){
  Shape *array [4];

  Shape shp = Shape();
  Circle crc = Circle(2);
  Rectangle rec = Rectangle(3,5, "Blue", true);
  Square sqr = Square(10, "Pink", false);

  array[0] = &shp;
  array[1] = &crc;
  array[2] = &rec;
  array[3] = &sqr;

  for (int i=0; i<4; i++){
    array[i] -> print();
  }
}