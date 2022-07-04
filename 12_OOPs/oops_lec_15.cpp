//multiple inheritance example
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class God//parent class 1
{
public:
  int height;
  int weight;
  int age;
public:
  void dancing()
  {
    cout << "Male is dancing and singing" << endl;
  }
};

class Human//parent class 2
{
public:
  int health;
public:
  void sleep()
  {
    cout << "Male is sleeping" << endl;
  }
};
//child class of parent class 1 and 2
class Hybrid : public God , public Human
{
public:
  int anger;
public:
  void dance()
  {
    cout << "Male is dancing" << endl;
  }

  int getWeight()
  {
    return this -> weight;
  }

  void setWeight(int weight)
  {
    this -> weight = weight;
  }
};
int main()
{
  Hybrid Deepraj;
  Deepraj.setWeight(50);
  cout << "Deepraj weight is -> " << Deepraj.getWeight() << endl;
  Deepraj.sleep();
  Deepraj.dancing();
  Deepraj.dance();
}
