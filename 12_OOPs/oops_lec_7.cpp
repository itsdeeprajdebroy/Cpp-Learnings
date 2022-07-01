//Copy Constructors
#include<iostream>
using namespace std;

class Hero
{
private://access specifiers
  int health;
  char level;
public:
  //parameterised constructor
  Hero(int health , char level)
  {
    this -> health = health;//this stores address of current object
    this -> level = level;
  }
  //Copy Constructor-> not mandatorlylly required(as by default copy constructor is present)
  Hero(Hero &temp)
  {
    this -> health = temp.health;//this stores address of current object
    this -> level = temp.level;
  }

  int getHealth()
  {
    return health;
  }

  char getLevel()
  {
    return level;
  }
};

int main()
{
  //static allocation
  Hero Deepraj(10,'a');
  cout << "Health is-> " << Deepraj.getHealth() << endl;
  cout << "Level is-> " << Deepraj.getLevel() << endl;
  cout << endl;
  //static allocation
  Hero raj(Deepraj);
  cout << "Health is-> " << raj.getHealth() << endl;
  cout << "Level is-> " << raj.getLevel() << endl;
}
