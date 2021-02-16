#include "stackI.hpp"
#include "stack.cpp"

int main(){

  cout<<endl<<"------------------------------"<<endl<<endl;
  cout<<"Initializing stack of size 5"<<endl;
  Stack <int> s1 = Stack <int> (5);
  
  cout <<"Stack contents after initialization: ";
  s1.print();

  cout<<"Is stack empty?: "<< s1.isEmpty()<<endl;
  cout<<endl<<"------------------------------"<<endl<<endl;


  cout<<"Adding 5 elements"<<endl;
  s1.push(10); s1.print();
  s1.push(20); s1.print();
  s1.push(30); s1.print();
  s1.push(40); s1.print();
  s1.push(50); s1.print();

  cout<<endl<<"Which item is currently on top?"<<endl;
  cout<< s1.top() <<endl;

  cout<<endl<<"------------------------------"<<endl<<endl;

  cout<<"Deleting item from the top: "<<endl;
  s1.pop(); s1.print();

  cout<<endl<<"Which item is currently on top? "<<endl;
  cout<< s1.top() <<endl;

  cout<<endl<<"------------------------------"<<endl<<endl;

  cout<<"Removing all elements:"<<endl;
  s1.pop(); s1.print();
  s1.pop(); s1.print();
  s1.pop(); s1.print();
  s1.pop(); s1.print();
  
  cout<<endl<<"------------------------------"<<endl<<endl;
  
  cout<<"Error occurs when we try to delete an item from an empty stack:"<<endl<<endl;
  s1.pop();
}