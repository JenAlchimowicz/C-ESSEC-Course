#include <iostream>
#include <cmath>
using namespace std;

class Complex{
  private:
  double r, i;

  public:
  Complex(): r{0}, i{0} {};
  Complex(double rr, double ii): r{rr}, i{ii} {};

  double getR(){
    return this->r;}

  double getI(){
    return this->i;}

  void print(){
    cout<<"r: "<<this->r<<"  i: "<<this->i<<endl;
  }

  friend Complex operator-(Complex &, Complex &);
  friend Complex operator*(Complex &, Complex &);
  friend Complex operator/(Complex &, Complex &);
};

Complex operator+(Complex &c1, Complex &c2){
  return Complex(c1.getR() + c2.getR(), c1.getI() + c2.getI());}

Complex operator-(Complex &c1, Complex &c2){
  return Complex(c1.r-c2.r, c1.i-c2.i);}

Complex operator*(Complex &c1, Complex &c2){
  return Complex(c1.r*c2.r-c1.i*c2.i, c1.r*c2.i+c1.i*c2.r);}

Complex operator/(Complex &c1, Complex &c2){
  return Complex((c1.r*c2.r-c1.i*c2.i)/(pow(c1.i,2)+pow(c2.i,2)), (-c1.r*c2.i+c1.i*c2.r)/(pow(c1.i,2)+pow(c2.i,2)));
}

int main(){
  //Test Sum and Subtraction
  Complex t1 = Complex(-4,7);
  Complex t2 = Complex(5, -10);
  Complex t3 = Complex(2,12);
  Complex t4 = Complex(3,-15);

  Complex res1 = t1 + t2;
  res1.print();
  Complex res2 = t3 - t4;
  res2.print();\
  cout << "------------------------"<<endl<<endl;
  
  //Test product
  t1 = Complex(1,-5);
  t2 = Complex(-9, 2);
  t3 = Complex(0, 7);
  t4 = Complex(-5,2);
  Complex t5 = Complex(1,-8);
  Complex t6 = Complex(1,8);

  res1 = t1 * t2;
  res2 = t3 * t4;
  Complex res3 = t5 * t6;
  res1.print();
  res2.print();
  res3.print();
  cout << "------------------------"<<endl<<endl;
  //Test division
  t1 = Complex(3,-1);
  t2 = Complex(2, 7);
  t3 = Complex(6, -9);
  t4 = Complex(0,2);

  res1 = t1 / t2;
  res2 = t3 / t4;
  res1.print();
  res2.print();
}
