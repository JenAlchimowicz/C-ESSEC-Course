#include<iostream>
#include "Point.cpp"
using namespace std;

int main(){
  Point k = Point();
  Point l = Point(100, 2);

  cout << k.distance(l) << endl;
}