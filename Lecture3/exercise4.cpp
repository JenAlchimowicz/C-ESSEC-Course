#include<iostream>
#include <stdlib.h>
#include<time.h>
#include "print_functions.h"
using namespace std;

void random_double_vector(double a[], int n, double m, double M){
  //Why do I need this? Double check!
  double f = (double)rand() / RAND_MAX;
  //Cast doubles into array
  for(int i=0; i<n; i++){
    a[i] = m + f*(M-m);
  return;
  }
}

int main(){
  //Declare random seed
  srand(time(0));

  //Take random size of array
  int n = rand()%20+1;
  //Declare an array size n
  double a[n];
  //Take random bottom boundary for array elements
  double m = double(rand()%100);
  //Take random upper boundary for array elements (ensures M>= m)
  double M = double(rand()%100+m);

  random_double_vector(a, n, m, M);
  print_double_vector(a, n);

  return 0;
}