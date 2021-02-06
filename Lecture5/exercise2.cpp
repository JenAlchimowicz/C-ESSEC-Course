#include<iostream>
using namespace std;


int count_pairs(string str, int n, string pair){
  int k = 0;
  for(int i=0; i<n; i++){
    if (str.substr(i,1)+str.substr(i+1,1) == pair)
    k+=1;
  }
  return k;
}

int main(){
  string str = "asdasdasdlolololo";
  int n = str.length();
  string pair = "lo";

  cout << pair << " occured " << count_pairs(str, n, pair) << " times" << endl;
}