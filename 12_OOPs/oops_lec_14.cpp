//multilevel Inheritance example
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class God
{
public:
  int height;
  int weight;
  int age;
public:
  void dancing()
  {
    cout << "Male is dancing and hello" << endl;
  }
};
//inheriting class
class Human : public God
{
public:
  int health;
public:
  void sleep()
  {
    cout << "Male is sleeping" << endl;
  }
};

//inheriting class of male class
class Male : public Human
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
  Male Deepraj;
  Deepraj.setWeight(50);
  cout << "Deepraj weight is -> " << Deepraj.getWeight() << endl;
  Deepraj.sleep();
  Deepraj.dancing();
  Deepraj.dance();
}
