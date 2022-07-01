//Default Constructors
#include<iostream>
using namespace std;

class Hero
{
public:
  int health;
  char level;
  //default constructor
  Hero()
  {
    cout << "Constructor created" << endl;
  }
};

int main()
{
  //static allocation
  Hero Deepraj;//object created

  //dynamically allocation
  Hero *ali = new Hero;//object created
}
