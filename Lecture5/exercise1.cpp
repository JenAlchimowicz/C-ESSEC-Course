#include<iostream>
using namespace std;

bool only_digits(string str, int n){
  for(int i=0; i<n; i++){
    if(str[i]<'0' || str[i]>'9'){
      return false;
    }
  }
  return true;
}

int main(){
  string str = "232413";
  int n = str.length();
  
  if (only_digits(str, n)==true){
    cout << "Only digits" << endl;
  }
  else{
    cout << "NOT only digits" << endl;
  }
}