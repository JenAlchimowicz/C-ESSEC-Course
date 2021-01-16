#include <iostream>
using namespace std;

int main(){
  int n, a=0, b=1, s;

  cout << "Which term would you like?" << endl;
  cin >> n;
  cout << "Your number: ";

  if (n==1){
      cout << a;
    }
  else if (n==2){
      cout << b;
    }
  else{
    for (int i=2; i<n;i++){
      s = a + b;
      a = b;
      b = s;
      if (i==n-1){
        cout << s <<"  ";
      }
    }
  }
}