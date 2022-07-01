//shallow-copy
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
    strcpy(this -> name , name);
  }
};

int main()
{
  //static allocation
  char name[5] = "Deep";
  Hero Deepraj(10,'a');
  Deepraj.setName(name);
  cout << "Health of Deepraj is-> " << Deepraj.getHealth() << endl;
  cout << "Level of Deepraj is-> " << Deepraj.getLevel() << endl;
  Deepraj.printName();
  cout << endl;
  //static allocation-> using default copy constructor
  Hero raj(Deepraj);
  cout << "Health of raj is-> " << raj.getHealth() << endl;
  cout << "Level of Raj is-> " << raj.getLevel() << endl;
  raj.printName();
  cout << endl;
  name[1] = 'X';
  Deepraj.setName(name);
  cout << "Health of Deepraj is-> " << Deepraj.getHealth() << endl;
  cout << "Level of Deepraj is-> " << Deepraj.getLevel() << endl;
  Deepraj.printName();
  cout << endl;
  cout << "Health of raj is-> " << raj.getHealth() << endl;
  cout << "Level of Raj is-> " << raj.getLevel() << endl;
  raj.printName();
}
//so we tried to change Deepraj name but Raj name has also changed which is shallow copy
//default copy constructor uses shallow copy
