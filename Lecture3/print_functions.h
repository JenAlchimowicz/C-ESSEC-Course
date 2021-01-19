using namespace std;

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

void print_double_vector(double v[], int n){
  cout<<"{";
  for (int i=0; i<n; i++){
    if (i==n-1){
      cout <<v[i] <<"}";
      break;
    }
    cout<<v[i] <<", ";
  }
  return;
}
