//getters and setters
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
  //static allocation
  Hero Deepraj;

  //dynamic allocation
  Hero *ali = new Hero;

  //values
  Deepraj.health = 100;
  Deepraj.level = 'a';
  ali->health = 50;//*ali.health[same meaning]
  ali->level = 'b';//*ali.level[same meaning]
  cout << "Health is -> " << Deepraj.health << endl;
  cout << "Level is -> " << Deepraj.level << endl;
  cout << "Health is -> " << ali->health << endl;
  cout << "Level is -> " << ali->level << endl;
}
