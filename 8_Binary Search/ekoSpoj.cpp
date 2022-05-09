#include<bits/stdc++.h>
using namespace std;
//eko (spoj) problem
bool isPossibleSolution(int arr[], int target, int size, int mid)
{
  int diff = 0, sum = 0, i = 0;
  while(i != size)
  {
    if(arr[i] > mid)
    {
      diff = arr[i] - mid;
      sum = sum + diff;
    }
    i++;
  }
  return (sum >= target);
}

int maxHeight(int arr[], int target, int size)
{
  sort(arr, arr + size);
  int start = 0, end = arr[size - 1], mid = 0, ans = -1;
  while(start <= end)
  {
    mid = (start + end)/2;
    if(isPossibleSolution(arr, target, size, mid))
    {
      ans = mid;
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return ans;
}
//driver code
int main()
{
  int arr[]={15, 8, 18, 6, 10}, target = 40;
  cout<<"Maximum possible height is "<<maxHeight(arr, target, 5);
  return 0;
}
//driver code
