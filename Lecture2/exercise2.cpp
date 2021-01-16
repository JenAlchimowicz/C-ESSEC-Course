#include <iostream>
#include <math.h>
using namespace std;

double x;

double position(double x0, double v, double a, double h, int i){
  x = x0 + v*(i*h) + 1./2.*a*pow((i*h),2);
  return x;
}

int main(){
  double x0, v, a, h;
  int n;
  cout << "Enter the initial position, speed and acceleration of your body: " << endl;
  cin >> x0 >> v >> a;
  cout << "How many times you want to display the position of the moving object?" << endl;
  cin >> n;
  cout << "How often (in seconds) you want to update the position of the object?" << endl;
  cin >> h;

  cout <<"------------------------------" << endl;
  cout <<"Initial position: " << x0 << endl;
  cout <<"Speed : " << v << endl;
  cout <<"Acceleration: " << a << endl;
  cout <<"Number of check points: " << n << endl;
  cout <<"Delta t: " << h << endl;
  cout <<"------------------------------" << endl;

  for(int i=0; i<n; i++){
    x = position(x0, v, a, h, i);
    cout << "At time " << (i*h) << " the position is " << x << endl;
  }
}