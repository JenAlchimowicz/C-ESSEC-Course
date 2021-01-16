#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int t;
  double x,y, ox, oy, r;
  cout << "Please give x coordinate of the centre of  the circle: " << endl;
  cin >> ox;
  cout << "Please give y coordinate of the centre of  the circle: " << endl;
  cin >> oy;
  cout << "Please give the radius of circle: " << endl;
  cin >> r;
  
  while(true){
    cout << "Please give x coordinate of point: " << endl;
    cin >> x;
    cout << "Please give y coordinate of point: " << endl;
    cin >> y;

    //(x-h)^2+(y-k)^2<=r^2
    if (pow(x-ox,2) + pow(y-oy,2) <= pow(r,2)){
      cout << "Inside the circle" << endl;
    }
    else{
      cout << "Otside of the circle" << endl;
    }
    cout << "Do you want to test another point? (no = 0, yes = 1)" << endl;
    cin >> t;
    if (t==0){
      break;
    }
  }
}