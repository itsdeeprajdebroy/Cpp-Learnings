//Parameterized Constructors and this pointer
#include<iostream>
using namespace std;

class Hero
{
private://access specifiers
  int health;
  char level;
public:
  //Parameterized constructor
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
};

int main()
{
  //static allocation
  Hero Deepraj(10,'a');
  cout << "Address of Deepraj ->" << &Deepraj << endl;
  cout << "Health is-> " << Deepraj.getHealth() << endl;
  cout << "Level is-> " << Deepraj.getLevel() << endl;
  cout << endl;
  //static allocation
  Hero raj(100,'b');
  cout << "Address of raj ->" << &raj << endl;
  cout << "Health is-> " << raj.getHealth() << endl;
  cout << "Level is-> " << raj.getLevel() << endl;
}
