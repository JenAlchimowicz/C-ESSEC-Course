#include <iostream>
#include <math.h>
using namespace std;

void swap(double &x, double &y){
  double temp1, temp2;
  temp1 = x;
  temp2 = y;
  x = temp2;
  y = temp1;
  return;
}

int main(){
  double x = 0.5;
  double y = 13;
  cout <<"X: "<< x <<"  Y: "<< y << endl;
  swap(x, y);
  cout <<"X: "<< x <<"  Y: "<< y << endl;
  return 0;
}