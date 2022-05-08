#include<bits/stdc++.h>
using namespace std;
//square root using binary search
int mySqrt(int num)
{
  int start = 0, end = num, mid = 0;
  while(start <= end)
  {
    mid = start + (end - start)/2;
    if(num >= (mid * mid) && num < ((mid + 1) * (mid + 1)))
    {
      return mid;
    }
    else if((mid * mid) > num)
    {
      end = mid - 1;
    }
    else if((mid * mid) < num)
    {
      start = mid + 1;
    }
  }
  return -1;
}
//for any number other than perfect square number
float preciseSqrt(int tempSol, int num, int precision)
{
  float factor = 1, ans = 0;
  ans = tempSol;
  for(int i = 0; i < precision; i++)
  {
    factor = factor/10;
    for(float j = ans; (j * j) < num; j = j + factor)
    {
      ans = j;
    }
  }
  return ans;
}

int main()
{
  int num, precision;
  cout<<"Enter number sqrt to be found "<<endl;
  cin>>num;
  cout<<"precision is "<<endl;
  cin>>precision;
  int tempSol = mySqrt(num);
  if((tempSol * tempSol) == num)
  {
    cout<<"sqrt is "<<tempSol;
  }
  else
  {
    float preciseSol = preciseSqrt(tempSol, num, precision);
    cout<<"Sqrt is "<<preciseSol;
  }
  return 0;
}
