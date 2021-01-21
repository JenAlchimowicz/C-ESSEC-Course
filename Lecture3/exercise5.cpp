#include<iostream>
#include "print_functions.h"
using namespace std;

void sum(const double a1[], const double a2[], double r[], int n){
  for (int i=0; i<n; i++){
    r[i] = a1[i] + a2[i];
  }
}

void dif(const double a1[], const double a2[], double r[], int n){
  for (int i=0; i<n; i++){
    r[i] = a1[i] - a2[i];
  }
}

void prod(const double a1[], const double a2[], double r[], int n, int k){
  for (int i=0; i<n; i++){
    r[i] = a1[i]*k;
  }
}

void scal_prod(const double a1[], const double a2[], double r[], int n){
  for (int i=0; i<n; i++){
    r[i] = a1[i] * a2[i];
  }
}


int main(){
  //Define vector sizes (assuming exual)
  int n = 5;
  //Initialize example vectors
  double a1[5] = {0.1, 5, 9.9, 200, 0};
  double a2[5] = {1., 2., 3., 4., 2.222};
  //Define output vector
  double r[n];
  
  cout <<"Initial vectors a1 and a2: " << endl;
  print_double_vector(a1, n);
  cout << endl;
  print_double_vector(a2, n);
  cout <<endl<<"-------------------------------" << endl;

  cout << "Sum of the example vectors: " << endl;
  sum(a1, a2, r, n);
  print_double_vector(r,n);

  cout << endl <<"Difference of the vectors: " << endl;
  dif(a1, a2, r, n);
  print_double_vector(r,n);

  cout << endl << "Product of a1 * 5: " << endl;
  int k = 5;
  prod(a1, a2, r, n, k);
  print_double_vector(r,n);

  cout << endl << "Scalar product between a1 and a2: " << endl;
  scal_prod(a1, a2, r, n);
  print_double_vector(r,n);
}