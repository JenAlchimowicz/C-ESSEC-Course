#ifndef Shape_cpp
#define Shape_cpp

#include<iostream>
using namespace std;

class Shape{
  protected:
  string color;
  bool filled;

  public:
  Shape(): color{"green"}, filled{false} {};
  Shape(string c, bool f): color{c}, filled{f} {};

  string get_color(){
    return this -> color;}

  bool get_filled(){
    return this -> filled;}

  void set_color(string c){
    this -> color = c;}

  void set_filled(bool f){
    this -> filled = f;}

  virtual void print(){
    cout<<"Color: "<<color<<" Filled: "<<filled<<endl;}

  virtual double get_area(){
    return -1;}

  virtual double get_parimeter(){
    return -1;}
    
};
#endif /* Shape_cpp */