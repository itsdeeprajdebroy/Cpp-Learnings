//reference variable
#include<iostream>
using namespace std;
void update(int &j)
{
  j++;
}
int main()
{
  // int i = 5;
  // int &j = i;
  // cout << "i is -> " << i << endl;
  // cout << "Address of i is -> " << &i << endl;
  // cout << "j is -> " << j << endl;
  // cout << "Address of j is -> " << &j << endl;

  //why reference variable
  int i = 5;
  cout << "Before -> " << i << endl;
  update(i);
  cout << "After -> " << i << endl;
  return 0;
}
