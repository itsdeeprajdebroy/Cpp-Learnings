//factorial of a number
#include "iostream"
using namespace std;

int factorial(int n)
{
  //base condn
  if(n == 0)
    return 1;
  //reccursive function
  return n * factorial(n - 1);
}
int main()
{
  cout << factorial(5);
}

//sum of n number
#include "iostream"
using namespace std;

int sum(int n)
{
  //base condn
  if(n == 1)
    return 1;
  //reccursive function
  return n + sum(n - 1);
}
int main()
{
  cout << sum(3);
}

//print numbers in reverse order--tail reccursion
#include "iostream"
using namespace std;

void print(int n)
{
  //base condn
  if(n == 0)
    return ;

  cout << n <<" ";

  //reccursive function
  print(n - 1);


}

int main()
{
  print(10);
}


//print numbers in normal order--head reccursion
#include "iostream"
using namespace std;

void print(int n)
{
  //base condn
  if(n == 0)
    return ;

  //reccursive function
  print(n - 1);

  cout << n <<" ";
}

int main()
{
  print(10);
}
