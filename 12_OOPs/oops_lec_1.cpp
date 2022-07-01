#include<iostream>
using namespace std;

class Hero
{
  int health;
};
int main()
{
  Hero h1;
  cout << "Size of h1 -> " << sizeof(h1);
  //in case of empty class only 1 byte memory is allocated to object
}
