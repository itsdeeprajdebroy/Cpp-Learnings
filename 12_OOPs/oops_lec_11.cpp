//Destructor
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Hero
{
private://access specifiers
  int health;
  char level;
public:
  char *name;

  Hero()
  {
    name = new char[100];
  }

  Hero(int health , char level)
  {
    this -> health = health;//this stores address of current object
    this -> level = level;
  }

  int getHealth()
  {
    return health;
  }

  char getLevel()
  {
    return level;
  }

  void printName()
  {
    cout << "Name is-> " << this -> name << endl;
  }

  void setName(char name[])
  {
    this -> name = name;
  }
  //destructor -> manually created
  ~Hero()
  {
    cout << "Destructor created" << endl;
  }
};

int main()
{
  //static allocation
  Hero Deepraj;

  //dynamic allocation -> in dynamic allocation we need to delete manually
  Hero *raj = new Hero;
  delete raj;
}
