#include<iostream>
#include<cmath>
#include "shape.cpp"
using namespace std;

class Circle: public Shape{
  protected:
  double r;

  public:
  Circle(): r{1} {};
  Circle(double r): r{r} {};
  Circle(double r, string color, bool filled):
    Shape(color, filled),
    r(r) {};
  
  double get_radius(){
    return this -> r;}

  void set_radius(double rad){
    this -> r = rad;}

  double get_area(){
    return M_PI*pow(this->r,2);}

  double get_parimeter(){
    return 2*M_PI*this->r;}

  void print(){
    Shape::print();
    cout<<"Radius: "<<this->r<<endl;
    cout<<"Parimeter: "<<this->get_parimeter()<<endl;
    cout<<"Area: "<<this->get_area()<<endl;}

};