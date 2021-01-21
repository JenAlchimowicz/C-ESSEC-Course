#include<iostream>
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