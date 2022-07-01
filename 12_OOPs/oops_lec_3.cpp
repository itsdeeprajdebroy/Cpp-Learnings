//getters and setters
#include<iostream>
using namespace std;

class Hero
{
  int health;//private members can only accesed inside the class
public:
  char level;
  int getHealth()
  {
    return health;
  }

  int getLevel()
  {
    return level;
  }

  void setHealth(int health)
  {
    this -> health = health;
  }

  void setLevel(char level)
  {
    this -> level = level;
  }
};

int main()
{
  Hero Deepraj;
  Deepraj.setHealth(100);
  cout << "Health is -> " << Deepraj.getHealth() << endl;
}
