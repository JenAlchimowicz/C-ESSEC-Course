#include<iostream>
#include <cmath>
using namespace std;

double * read_poly(int &n){
  cout << "Grade of your polynomial: " << endl;
  cin >> n;
  double * c = new double[n+1];
  for (int i=0; i<=n; i++){
    cout << "Coefficient of degree " << i << ": ";
    cin >> c[i]; 
  }
  return c;
}

void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}

double val(double a[], int n, double x){
  cout << "At what x do you want to evaluate p1? "<<endl;
  cin >> x;
  double total = a[0];
  for (int i = 1; i<=n; i++){
    total += a[i] * pow(x, i);
  }
  return total;
}

double * poli_sum(double *p1, int d1, double *p2, int d2, int &dr){
  
}

int main(){
  double x;
  double *p1;
  int g1;
  p1 = read_poly(g1);
  print_poly(p1, g1);
  cout << val(p1, g1, x) << endl;
}