#ifndef Patient_cpp
#define Patient_cpp

#include "blood.cpp"
#include <vector>
#include <algorithm>

class Patient{
  protected:
  string name;
  vector <Blood> records;
  vector <int> vSystolic;
  vector <int> vDiastolic;

  public:
  Patient(): name{"No_name"} {};
  Patient (string n): name{n} {};

  void addRecord(Blood b){
    records.push_back(b);
    vSystolic.push_back(b.systolic);
    vDiastolic.push_back(b.diastolic);
  }

  void printReport(){
    //LIST OF RECORDS
    cout<<"-------------------------------"<<endl;
    cout<<"       Patient: "<<name<<endl;
    cout<<"Systolic  "<<"Diastolic    "<<"Day"<<endl;
    for (int i=0; i<records.size(); i++){
      records[i].print();
    }

    cout<<endl<<"Additional data:"<<endl;
    

    //HIGHEST ABNORMAL SYSTOLIC BLOOD PRESSURE
    cout<<"Highest abnormal systolic blood pressure: ";
    //get max record index using max_element from <algorithms>
    int maxSysId = max_element(vSystolic.begin(),vSystolic.end()) - vSystolic.begin();
    //Display record if max>140
    if (records[maxSysId].systolic > 140){
      cout<<endl;
      records[maxSysId].print();
      cout<<endl;
    }
    else{
      cout<<"No measurement was too high"<<endl;
    }

    //AVERAGE DIASTOLIC BLOOD PRESSURE
    cout<<"Average diastolic blood pressure: "<<endl;
    int dSum = 0;
    for (int i=0; i<vDiastolic.size(); i++){
      dSum += vDiastolic[i];
    }
    cout << dSum/vDiastolic.size()<<endl<<endl;


    //LIST OF MAX BLOOD PRESSURES
    cout<<"List of max blood pressures:"<<endl;
    records[maxSysId].print();
    for (int i=0; i<vSystolic.size(); i++){
      if (i==maxSysId){}
      else {
        if (vSystolic[i]==vSystolic[maxSysId]){
          records[i].print();
        }
      }
    }
    cout<<"-------------------------------"<<endl;
  }
};

#endif /* Patient_cpp */