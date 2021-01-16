#include<iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
  double epsilon, sum1, sum2, approx=10; //expect small epsilon
  int k=2;
  cout << "Please give epsilon:" << endl;
  cin >> epsilon;

  while(approx>=epsilon){
    sum1 = 0;
    sum2 = 0;
    for(int j=0; j<=k; j++)
      sum1 += pow((-1),j)*(double(4)/(2*j+1));
    for(int j=0; j<k; j++)
      sum2 += pow((-1),j)*(double(4)/(2*j+1));
    approx = abs(sum1-sum2);
    k++;
  }
  cout << "Approximation: " << sum1 << endl; 
}