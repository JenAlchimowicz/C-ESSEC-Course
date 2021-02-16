#ifndef stack_cpp
#define stack_cpp

#include <iostream>
#include <vector>
#include <exception>
#include "stackI.hpp"
using namespace std;

//Define exceptions
struct FullStackException: public exception {
   const char * what () const throw () {
      return "FullStackException";
   }
};

struct EmptyStackException: public exception {
   const char * what () const throw () {
      return "EmptyStackException";
   }
};

//Define Stack class
template <typename T>
class Stack: public StackI<T> {
  private:
  int n; //For max size of vector
  vector <T> stack;

  public:
  //Constructors
  Stack(): n{20} {};
  Stack(int nn): n{nn} {};


  //Is empty
  bool isEmpty() {
    return stack.empty();
  }

  //Push
  void push(T t) {
    if (stack.size() == n){
      throw FullStackException();
    }
    else{
      stack.push_back(t);
    }
  }

  //Pop
  void pop() {
    if (isEmpty() == true){
      throw EmptyStackException();
    }
    else{
      stack.pop_back();
    }
  }

  //T top
  T top() {
    if (isEmpty() == true){
      throw EmptyStackException();
    }
    else{
      return stack.back();
    }
  }

  //Print
  void print() {
    if (isEmpty()==true){
      cout<<"[]"<<endl;
    }
    else{
      cout<<"[ ";
      for (int i=stack.size()-1; i>=0; i--){
        cout<<stack[i]<<" ";
      }
      cout<<"]"<<endl;
    }
  }
};

#endif /* stack_cpp */