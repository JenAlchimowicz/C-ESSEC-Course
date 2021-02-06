#include<iostream>
#include<cmath>
using namespace std;

class Point{
  private:
    double x;
    double y;

  public:
  Point() = default;
  Point(double xx, double yy): x{xx}, y{yy} {};

  double distance(Point b){
    double dist;
    dist = sqrt(pow(b.x-x, 2) + pow(b.y-y,2));
    return dist;
  }

  void display(){
    cout << x << " " << y << endl;
  }
};