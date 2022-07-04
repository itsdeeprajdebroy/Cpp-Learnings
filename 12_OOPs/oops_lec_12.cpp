//Inheritance
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
class Male : public Human
{
public:
  int health;
public:
  void sleep()
  {
    cout << "Male is sleeping" << endl;
  }
};

int main()
{
  Male Deepraj;
  Deepraj.setWeight(50);
  cout << "Deepraj weight is -> " << Deepraj.getWeight() << endl;
  Deepraj.sleep();
}
