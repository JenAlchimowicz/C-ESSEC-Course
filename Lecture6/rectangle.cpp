#ifndef Rectangle_cpp
#define Rectangle_cpp

#include<iostream>
#include "shape.cpp"
using namespace std;

class Rectangle: public Shape{
  private:
  double length;
  double width;

  public:
  Rectangle(): length{1}, width{1} {};
  Rectangle(double l, double w): length{l}, width{w} {};
  Rectangle(double l, double w, string color, bool f):
    Shape(color, f),
    length(l), width(w) {};

  double get_length(){
    return this -> length;}

  double get_width(){
    return this -> width;}

  void set_lenght(double l){
    this -> length = l;}

  void set_width(double w){
    this -> width = w;}

  double get_area(){
    return this->length * this->width;}

  double get_parimeter(){
    return 2*this->length + 2*this->width;}

  void print(){
    cout<<"------ Rectangle ------"<<endl;
    Shape::print();
    cout<<"Length: "<<this->length<<endl;
    cout<<"Width: "<<this->width<<endl;
    cout<<"Area: "<<get_area()<<endl;
    cout<<"Parimeter: "<<get_parimeter()<<endl;
    cout<<"-----------------------"<<endl<<endl;
  }

};
#endif /* Rectangle_cpp */