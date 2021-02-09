#include<iostream>
#include<vector>
using namespace std;

class Date{
  private:
  int day;
  int month;
  int year;

  public:
  Date(int d, int m, int y): day{d}, month{m}, year{y} {};

  void print(){
    cout<<this->day<<"/"<<this->month<<"/"<<this->year;
  }
};

class Blood: public Date{
  private:
  int systolic;
  int diastolic;

  public:
  Blood(int sys, int dia, int d, int m, int y):
    Date(d,m,y),
    systolic(sys),
    diastolic(dia) {};

  void print(){
    cout<<this->systolic<<" "<<this->diastolic<<" ";
    Date::print();
    cout<<endl;
  }
};

class Patient{
  private:
  string name;
  vector<Blood> record;

  public:
  Patient(string n): name{n} {};

  void addRecord(Blood b){
    record.push_back(b);}

  void printReport(){
    cout<<"Patien name: "<<this->name<<endl;
    for (int i=0; i<record.size(); i++){
      cout<<i<<": ";
    }
  }
};

int main(){
  Patient mary("Mary");
  mary.addRecord(Blood(12,5,3,12,1997));
}
