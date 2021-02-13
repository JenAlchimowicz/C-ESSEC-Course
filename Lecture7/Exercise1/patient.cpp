#ifndef Patient_cpp
#define Patient_cpp

#include "blood.cpp"
#include <vector>

class Patient{
  protected:
  string name;
  vector <Blood> record;

  public:
  Patient(): name{"No_name"} {};
  Patient (string n): name{n} {};

  void addRecord(Blood b){
    record.push_back(b);
  }
  
  void printReport(){
    cout<<"-------------------------------"<<endl;
    cout<<"       Patient: "<<name<<endl;
    cout<<"Systolic  "<<"Diastolic    "<<"Day"<<endl;
    for (int i=0; i<record.size(); i++){
      record[i].print();
    }

    cout<<endl<<"Additional data:"<<endl;
    cout<<"Highest abnormal systolic blood pressure: "<<endl;

    



    cout<<"-------------------------------"<<endl;
  }
};

#endif /* Patient_cpp */