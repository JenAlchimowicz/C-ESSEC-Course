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
  //Set dr to the size of the bigger polynomial
  dr = max(d1, d2);

  //Define pointer variable
  double *sum = new double[dr];

  //Calculate the sum - first add the 'coordinates' of the first polynomial, then the second
  for (int i=0; i<=d1; i++){
    sum[i] = p1[i];
  }
  for (int i=0; i<=d2; i++){
    sum[i] += p2[i];
  }
  return sum;
}

double * poli_prod(double *p1, int d1, double *p2, int d2, int &dr){
  //Set dr to sum of the poly sizes
  dr = d1 + d2;

  //Define pointer variable
  double *prod = new double[dr];

  //Set output polynomial to only zeroes
  for (int i=0; i<=dr; i++){
    prod[i] = 0;
  }
  //Calculate the product
  for (int i=0; i<=d1; i++){
    for (int k=0; k<=d2; k++){
      prod[i+k] += p1[i] * p2[k];
    }
  }
  return prod;
}

int main(){
  //Initialise x for poly_val function
  double x;
  //Initialize pointer variables for 2 input polynomial and 1 output polynomial - all in heap
  double *p1 = new double;
  double *p2 = new double;
  double *p3 = new double;
  //Initialize size of polynomials
  int g1;
  int g2;
  int dr;
  //Used to determine which polynomial to evaluate
  int t;

  //Simple user interface
  cout << "----------------------------------"<<endl;
  cout << "Please define first polynomial:" << endl;
  p1 = read_poly(g1);

  cout <<endl<<"Please define second polynomial:" <<endl;
  p2 = read_poly(g2);

  cout <<endl<< "Provided polynomials:" << endl;
  print_poly(p1, g1);
  print_poly(p2, g2);

  cout << "----------------------------------"<<endl;
  cout << "Sum of the polynomials:" << endl;
  p3 = poli_sum(p1, g1, p2, g2, dr);
  print_poly(p3, dr);

  cout << "----------------------------------"<<endl;
  cout << "Product of the polynomials:" << endl;
  p3 = poli_prod(p1, g1, p2, g2, dr);
  print_poly(p3, dr);

  cout << "----------------------------------"<<endl;

  while(true){
    cout << "Which polynomial would you like to evaluate?"<<endl;
    cout<<"('1' for p1, '2' for p2)?:"<<endl;
    cin >> t;
    if(t==1){
      cout << val(p1, g1, x) << endl;
      break;
    }
    else if(t==2){
      cout << val(p2, g2, x) << endl;
      break;
    }
    else{
      cout<<"Invalid selection please input '1' or '2'"<<endl<<endl;
    }
  }

  //Delete variables in heap
  delete p1;
  delete p2;
  delete p3;
}