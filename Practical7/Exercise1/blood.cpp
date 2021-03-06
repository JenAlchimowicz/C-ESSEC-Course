#ifndef Blood_cpp
#define Blood_cpp

#include "date.cpp"

class Blood{
  protected:
  int systolic;
  int diastolic;
  Date day;

  public:
  Blood(int sys, int dia, Date d): systolic{sys}, diastolic{dia}, day{d} {};

  void print(){
    cout<<"   "<<this->systolic<<"        "<<this->diastolic<<"       ";
    this->day.print();
  }

  //Important: we can access systolic and diastolic values directly from the Patient class
  friend class Patient;
};

#endif /* Blood_cpp */