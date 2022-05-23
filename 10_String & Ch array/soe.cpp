#include<iostream>
#include<vector>
using namespace std;
//count number of primes(soe)
int getCount(int num)
{
  int count = 0;
  vector<bool> myPrime(num + 1 , true);
  myPrime[0] = myPrime[1] = false;
  for(int i = 2; i * i <= num; i++)
  {
    if(myPrime[i])
    {
      for(int j = 2 * i; j < num; j = j + i)
      {
        myPrime[j] = false;
      }
    }
  }
  //printing and counting prime numbers
  cout << "Prime numbers which are smaller than the given number -> " ;
  for(int i = 0; i < num; i++)
  {
    if(myPrime[i])
    {
      cout << i << " ";
      count++;
    }
  }
  return count;
}

//driver code
int main()
{
  int num = 7;
  int ans = getCount(num);
  cout << endl;
  cout << "count of prime numbers is -> " << ans;
}
//driver code
