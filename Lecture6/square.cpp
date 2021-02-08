#include<iostream>
#include "rectangle.cpp"
using namespace std;

class Square: public Rectangle{
  public:
  Square() {};
  Square(double a): Rectangle{a,a} {};
  Square(double a, string c, bool f):
    Rectangle(a,a,c,f) {};

  void print(){
    Shape::print();
    cout<<"Side length: "<<Rectangle::get_length()<<endl;
    cout<<"Area: "<<Rectangle::get_area()<<endl;
    cout<<"Parimeter: "<<Rectangle::get_parimeter()<<endl;
  }

  void set_side(double side){
    Rectangle::set_width(side);
    Rectangle::set_lenght(side);
  }

  void set_length(double side){
    Rectangle::set_width(side);
    Rectangle::set_lenght(side);
  }

  void set_width(double side){
    Rectangle::set_width(side);
    Rectangle::set_lenght(side);
  }

};