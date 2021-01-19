#include<iostream>
#include <stdlib.h>
#include<time.h>
#include "print_functions.h"
using namespace std;

//Function to input random elements into array a
void random_int_vector(int a[], int n, int m, int M){
  for(int i=0; i<n; i++){
    a[i] = rand()%M+m;
  }
}

int main(){
  //Declare random seed
  srand(time(0));

  //Take random size of array
  int n = rand()%20+1;
  //Declare an array size n
  int a[n];
  //Take random bottom boundary for array elements
  int m = rand()%100;
  //Take random upper boundary for array elements (ensures M>= m)
  int M = rand()%100+m;

  random_int_vector(a, n, m, M);
  print_int_vector(a, n);

  return 0;
}