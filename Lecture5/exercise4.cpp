#include<iostream>
#include "Circle.cpp"
using namespace std;

int main(){
  Circle lel = Circle(0,0,3);
  Point p = Point(0,3);

  cout << lel.circumference() << endl;
  cout << lel.area() << endl;
  cout << lel.inside(p) << endl;
}