#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n;
  cout << "How many lines would you like?" << endl;
  cin >> n;
  cout << "---------------------------------" << endl;

  for (int i=1; i<=n; i++){
    for (int k=0; k<i; k++){
      static int x=1;
      cout << x << " ";
      x++;
    }
    cout << endl;
  }
  cout << "---------------------------------";
}