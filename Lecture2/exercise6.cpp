#include <iostream>
using namespace std;

int x=0;

int fib(int n){
  x += 1;
  if (n<=1){
    return n;
  }
  return fib(n-1) + fib(n-2);
}

int main(){
  int n;
  cout << "Which term would you like? (starting from 0)" << endl;
  cin >> n;
  cout << "Your number: " << fib(n) << endl;
  cout << "Number of recursive calls: " << x << endl;
}