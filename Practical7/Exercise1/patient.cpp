#ifndef Patient_cpp
#define Patient_cpp

#include "blood.cpp"
#include <vector>

class Patient{
  protected:
  string name;
  vector <Blood> records;

  public:
  Patient (string n): name{n} {};

  void addRecord(Blood b){
    records.push_back(b);
  }

  
  //PRINT HIGHEST ABNORMAL SYSTOLIC BLOOD PRESSURE
  void printAbnSys(){
    cout<<"Highest abnormal systolic blood pressure: ";

    //Store max value in max and id of the record in maxId
    int max = 0;
    int maxId;
    for (int i=0; i<records.size(); i++){
      if (records[i].systolic > max){
        max = records[i].systolic;
        maxId = i;
      }
    }
    //Display record if max>140
    if (max > 140){
      cout<<endl;
      records[maxId].print();
      cout<<endl;
    }
    else{
      cout<<"No measurement was too high"<<endl;
    }
  }

  //PRINT AVERAGE DIASTOLIC BLOOD PRESSURE
  void printAvDia(){
    cout<<"Average diastolic blood pressure: "<<endl;
    double dSum = 0;
    for (int i=0; i<records.size(); i++){
      dSum += records[i].diastolic;
    }
    cout << dSum/double(records.size())<<endl<<endl;
  }

  //PRINT LIST OF MAX BLOOD PRESSURES
  void printMaxList(){
    cout<<"List of max blood pressures:"<<endl;
    
    //Store ids in a vector and value of max in variable max
    vector <int> maxId;
    int max = 0;

    //Get ids of max rows
    for (int i=0; i<records.size(); i++){
      if (records[i].systolic > max){
        max = records[i].systolic;
        maxId.clear();
        maxId.shrink_to_fit();
        maxId.push_back(i);
      }
      else if (records[i].systolic == max){
        maxId.push_back(i);
      }
    }

    //Call print for all ids stored in maxId
    for (int i=0; i<maxId.size(); i++){
      records[maxId[i]].print();
    }
  }

  //PRINT REPORT
  void printReport(){
    cout<<"-------------------------------"<<endl;
    cout<<"       Patient: "<<name<<endl;
    cout<<"Systolic  "<<"Diastolic    "<<"Day"<<endl;
    for (int i=0; i<records.size(); i++){
      records[i].print();
    }

    cout<<endl<<"***  Additional data:  ***"<<endl;
    
    printAbnSys();
    printAvDia();
    printMaxList();

    cout<<"-------------------------------"<<endl;
  }
};

#endif /* Patient_cpp */