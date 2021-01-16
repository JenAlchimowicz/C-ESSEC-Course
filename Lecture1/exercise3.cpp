#include <iostream>
using namespace std;

int main(){
  int x,y;

  cout <<"Giff x:"<< endl; 
  cin >> x;
  cout <<"Giff y:"<< endl; 
  cin >> y;

  if (x%y == 0)
    cout << "x is a multiple of y";
  else{
    cout << "x is NOT a multiple of y";
  }
}