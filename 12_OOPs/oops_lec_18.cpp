//polymorphism -> Run time polymorphism
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
  void speak()
  {
    cout << "We can speak " << endl;
  }
};
//inherited class having same function name , Same argument etc --> Method Overriding
class Dog: public Animal
{
public:
  void speak()
  {
    cout << "We can bark " << endl;
  }
};

int main()
{
  Dog obj;
  obj.speak();
}
