#include<iostream>
#include <stdlib.h>
#include<time.h>
#include "search_min.h"
using namespace std;

void selection_sort(int v[], int n){
  int l = 0;
  int temp;
  for (int i=0; i<n; i++){
    temp = search_min(v, n, l, n-1);
    swap(v[i], v[temp]);
    l++;
  }
}

int main(){
  srand(time(0));

  int nsz = 7;
  int sz[7] = {10, 1000, 10000, 50000, 10000, 150000, 200000};
  int n;
  int v[n];

  for (int j=0; j<nsz; j++){
    //Set size of array for this iteration
    n = sz[j];
    //Populate the array
    for (int i=0; i<n ; i++){
      v[i] = rand()%sz[j];
    }
    //Sort the array and measure time
    double start = clock();
    selection_sort(v, n);
    double end = clock();
    double seconds = (end-start) / CLOCKS_PER_SEC;

    cout << "Size of array: " << sz[j] << endl;
    cout << "Running time: " << seconds << endl;
    cout << "-----------------------------------" <<endl;
  }
}