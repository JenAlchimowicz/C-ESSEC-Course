#ifndef stack_cpp
#define stack_cpp

#include <iostream>
#include "stackI.cpp"
using namespace std;

#define size(a) (sizeof(a) / sizeof(*a))

template <typename T>
class Stack: public StackI<T> {
  private:
  int n;
  T * stack;
  int tracker;

  public:
  //Constructors
  Stack() {stack = new T[20], tracker = -1;}
  Stack(int n) {stack = new T[n], tracker = -1;}

  //Destructor
  ~Stack(){
    if(stack != nullptr){
      delete stack;}
  }

  //Is empty
  bool isEmpty() override{
    if (tracker == -1){
      return true;
    }
    else{
      return false;
    }
  }

  //Push
  void push(T t) override{
    if (tracker == size(stack)){
      cout << "FullStackException"<<endl;
    }
    else{
      tracker += 1;
      stack[tracker] = t;
    }
  }

  //Pop
  void pop() override{
    if (isEmpty() == true){
      cout << "EmptyStackException"<<endl;
    }
    else{
      tracker -= 1;
    }
  }

  //T top
  T top() override{
    if (isEmpty() == true){
      cout << "EmptyStackException"<<endl;
      return;
    }
    else{
      return stack[tracker];
    }
  }

  //Print
  void print() override{
    cout<<"[";
    for (int i=size(stack); i>=0; i--){
      cout<<stack[i];
    }
    cout<<"]"<<endl;
  }
};

#endif /* stack_cpp */