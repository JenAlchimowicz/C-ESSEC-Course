#include <iostream>
using namespace std;

int main(){
  int i=0, x=5, k;
  
  while(i<5){
    k=0;
    while(k<x){
      cout<<"*";
      k++;
    }

    cout << endl;
    x--;
    i++;
  }
}