#include<iostream>
using namespace std;

void print_double_vector(double v[], int n){
  cout<<"{";
  for (int i=0; i<n; i++){
    if (i==n-1){
      cout <<v[i] <<"}";
      break;
    }
    cout<<v[i] <<", ";
  }
  return;
}

int main(){
  return 0;
}