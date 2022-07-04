//Inheritance more examples(public data member in base class and protected mode inheritance -> protected data member in the inheriting class example)
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
  int height;
  int weight;
  int age;
public:
  int getWeight()
  {
    return this -> weight;
  }

  void setWeight(int weight)
  {
    this -> weight = weight;
  }
};
//inheriting class
class Male : protected Human
{
public:
  int health;
public:
  void sleep()
  {
    cout << "Male is sleeping" << endl;
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
  Male Deepraj;
  Deepraj.setWeight(50);
  cout << "Deepraj weight is -> " << Deepraj.getWeight() << endl;
  Deepraj.sleep();
}
