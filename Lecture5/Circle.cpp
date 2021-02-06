#include<iostream>
#include "Point.cpp"
using namespace std;

class Circle{
  private:
  double x;
  double y;
  double r;
  const double pi;

  public:
  Circle(): x{0}, y{0}, r{1}, pi{3.14159265359} {};
  Circle(double xx, double yy, double rr): x{xx}, y{yy}, r{rr}, pi{3.14159265359} {};

  double circumference(){
    double c = 2*pi*r;
    return c;
  }

  double area(){
    double a = pi*pow(r,2);
    return a;
  }

  bool inside(Point a){
    Point k = Point(x,y);
    if (a.distance(k)<=r){
      return true;
    }
    else{
      return false;
    }
  }
  
};