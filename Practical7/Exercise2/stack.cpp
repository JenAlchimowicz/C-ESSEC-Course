#ifndef stack_cpp
#define stack_cpp

#include <iostream>
#include "stackI.hpp"
using namespace std;

#define size(a) (sizeof(a) / sizeof(*a))

template <typename T>
class Stack: public StackI<T> {
  private:
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
  bool isEmpty() {
    if (tracker == -1){
      return true;
    }
    else{
      return false;
    }
  }

  //Push
  void push(T t) {
    if (tracker == size(stack)){
      cout << "FullStackException"<<endl;
    }
    else{
      tracker += 1;
      stack[tracker] = t;
    }
  }

  //Pop
  void pop() {
    if (isEmpty() == true){
      cout << "EmptyStackException"<<endl;
    }
    else{
      tracker -= 1;
    }
  }

  //T top
  T top() {
    if (isEmpty() == true){
      cout << "EmptyStackException"<<endl;
      throw bad_alloc();
    }
    else{
      return stack[tracker];
    }
  }

  //Print
  void print() {
    if (isEmpty()==true){
      cout<<"[]"<<endl;
    }
    else{
      cout<<"[";
      for (int i=size(stack); i>=0; i--){
        cout<<stack[i]<<" ";
      }
      cout<<"]"<<endl;
    }
  }
};

#endif /* stack_cpp */