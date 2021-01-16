#include <iostream>
using namespace std;

int main(){
  int x, i=0, result=1;

  cout <<"Giff x:"<< endl; 
  cin >> x;

  while(i<x){
    result=result*(x-i);
    i++;
  }
  cout << result;
}