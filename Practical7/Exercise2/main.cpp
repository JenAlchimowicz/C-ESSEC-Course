#include "stackI.hpp"
#include "stack.cpp"

int main(){

  cout<<"Initializing stack of size 5"<<endl;
  Stack <int> s1;
  cout<<endl<<endl<<sizeof(s1)<<endl<<endl;
  
  cout <<"Stack contents after initialization: ";
  s1.print();

  cout<<"Is stack empty?: "<< s1.isEmpty()<<endl;
  cout<<"------------------------------"<<endl<<endl;

  cout<<"Adding 5 elements and attempting to add a sixth one"<<endl;
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(40);
  s1.push(50);
  s1.push(60);


  s1.print();

  s1.pop();

  s1.print();

  cout<< s1.top() <<endl;


  s1.~Stack();
  return 0;
}