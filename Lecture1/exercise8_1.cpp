#include<iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  double sum;

  cout << "Please give n" << endl;
  cin >> n;

  for(int j=0; j<=n; j++)
    sum += pow((-1),j)*(double(4)/(2*j+1));

  cout << "Approximation: " << sum; 
}