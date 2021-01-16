#include<iostream>
#include <limits>
using namespace std;

int main(){
  int i=0;
  double x;
  double max=-(numeric_limits<double>::infinity());
  double min=numeric_limits<double>::infinity();

  while(i<10){
    cout << "Give me next number: ";
    cin >> x;
    if (x>max)
      max=x;
    if (x<min)
      min=x;
    i++;
  }
  cout << "Max is: " << max << endl;
  cout << "Min is: " << min << endl;
}