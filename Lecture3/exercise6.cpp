#include<iostream>
#include <stdlib.h>
#include<time.h>
#include "print_functions.h"
using namespace std;

int search_min(int v[], int n, int l, int h){
  int min_val = v[l];
  int min_index = l;
  for (int i=l+1; i<=h; i++){
    if (v[i]<min_val){
      min_val = v[i];
      min_index = i;
    }
  }
  return min_index;
} 

int main(){
  srand(time(0));
  //Number of elements in vector
  int n = 10;
  //Define vecctor and assign  values
  int v[10] = {1, 3, 4, 10, 3, 4, 5, 7, 11, 6};
  //Define l and h;
  int l = 7;
  int h = 9;
  cout << search_min(v, n, l, h) << endl;
}