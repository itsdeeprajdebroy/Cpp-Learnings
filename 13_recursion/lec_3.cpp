//climbing stairs
#include "iostream"
using namespace std;

int stairs(int n)
{
  //base condn
  if(n == 0)
    return 1;
  if(n < 0)
    return 0;

  //reccursive function
  return stairs(n - 1) + stairs(n - 2);
}
int main()
{
  cout << stairs(3);
}
