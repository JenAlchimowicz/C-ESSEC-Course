#include <iostream>
using namespace std;

int j=0, k=0;

int power1(int a, int n){
  j++;
  if(n==0){
    return 1;
  }
  return a*power1(a, n-1);
}

int power2(int a, int n){
  k++;
  if(n==0){
    return 1;
  }
  else if(n%2==0){
    return power2(a,n/2) * power2(a,n/2);
  }
  else{
    return a * power2(a,n/2) * power2(a,n/2);
  }
}

int main(){
  int a, n;
  cout << "Please give the base a:" << endl;
  cin >> a;
  cout << "PLease give the exponent n:" << endl;
  cin >> n;

  cout << endl;
  cout << "Method 1 answer: " << power1(a,n) << endl;
  cout << "Method 1 number of iterations: " << j << endl;
  cout << "Method 2 answer: " << power2(a,n) << endl;
  cout << "Method 2 number of iterations: " << k << endl;
}

//To compute the next element in multiplication a*a*a*...*a the function power1 has to be called only once. Thus number of iterations will always be equal to n+1. On the other hand to compute the next element in multiplication the function power2 uses two recursive calls, thus making the number of iterations larger.