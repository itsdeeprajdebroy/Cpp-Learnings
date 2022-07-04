//polymorphism -> compile time polymorphism
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
  void hello()
  {
    cout << "Hello " << endl;
  }
  //function overloaded
  void hello(string name)
  {
    cout << "Hello " << name << endl;
  }
  //function overloaded
  int hello(int n)
  {
    cout << "Hello " << n << endl;
    return n;
  }
};

int main()
{
  A obj;
  obj.hello("raj");
  obj.hello();
  cout << obj.hello(5);
}
