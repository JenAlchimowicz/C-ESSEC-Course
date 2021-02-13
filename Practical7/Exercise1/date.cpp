#ifndef Date_cpp
#define Date_cpp

#include <iostream>
using namespace std;

class Date{
  protected:
  int day, month, year;

  public:
  Date(int d, int m, int y): day{d}, month{m}, year{y} {};

  virtual void print(){
    cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
  }

};

#endif /* Date_cpp */