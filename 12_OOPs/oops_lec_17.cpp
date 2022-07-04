//polymorphism -> compile time polymorphism
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
  int a;
  int b;
  //operator overloading
  void operator() ()
  {
    cout << "I am called" << endl;
  }
  //operator overloading
  void operator+ (A &obj)
  {
    cout << (this -> a) * (obj.b);
  }
};

int main()
{
  A obj, obj1, obj2;
  obj();
  obj1.a = 10;
  obj2.b = 5;
  obj1 + obj2;//'+' acting as '*'
}
