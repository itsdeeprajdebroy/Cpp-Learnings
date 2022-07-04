//fibonacci series using reccursion
#include "iostream"
using namespace std;

int fibo(int n)
{
  //base condn
  if(n == 0)
    return 0;
  if(n == 1)
    return 1;

  //reccursive function
  return fibo(n - 1) + fibo(n - 2);
}
int main()
{
  cout << fibo(4);
}
