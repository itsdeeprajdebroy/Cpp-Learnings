#include<iostream>
using namespace std;

class Hero
{
public:
  int health;
  char level;
};

int main()
{
  Hero Deepraj;
  Deepraj.health = 100;
  Deepraj.level = 'a';
  cout << "Health is -> " << Deepraj.health << endl;
  cout << "Level is -> " << Deepraj.level;
}
