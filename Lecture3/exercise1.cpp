#include<iostream>
using namespace std;

//Func that lets the user input integers into an array of size n
void read_int_vector(int a[], int n){
  //Iterate through each memory location of the array and assign a value to it
  for (int i=0; i<n; i++){
    cout << "Please input " << i <<"th number: " << endl;
    cin >> a[i];
  }
  return;
}

//Fuct to display elements of an array size n
void print_int_vector(int a[], int n){
  cout<<"{";
  for (int i=0; i<n; i++){
    //Change the formatting for last element to display '}' at the end
    if (i==n-1){
      cout <<a[i] <<"}";
      break;
    }
    cout<<a[i] <<", ";
  }
  return;
}

int main(){
  //n holds the size of the array
  int n;
  cout << "Pleas input the size of your array: " << endl;
  cin >> n;

  //Declare an array of size n
  int v2[n];

  //Call the functions
  read_int_vector(v2, n);
  print_int_vector(v2, n);
}