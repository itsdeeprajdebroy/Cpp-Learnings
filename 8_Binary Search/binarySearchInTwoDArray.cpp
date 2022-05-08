#include<bits/stdc++.h>
using namespace std;
//searching using binary search in 2d array
//to find the particular row where target lies
int rowFinder(int arr[3][3], int row, int target)
{
  int start = 0, end = row - 1, mid = 0;
  while(start <= end)
  {
    mid = start + (end - start)/2;
    if(arr[mid][0] <= target && target <= arr[mid][2])
    {
      return mid;
    }
    else if(arr[mid][0] > target)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return -1;
}
//binary search to find the element if exit in given row
int binarySearch(int arr[3][3], int row, int col, int target)
{
  int start = 0, end = col - 1, mid = 0;
  while(start <= end)
  {
    mid = start + (end - start)/2;
    if(arr[row][mid] == target)
    {
      cout<<"row is "<<row<<" "<<"col is "<<mid<<endl;
      return mid;
    }
    else if(arr[row][mid] > target)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
 }
return -1;
}

bool searchTarget(int arr[3][3], int row, int col, int target)
{
  if(target > arr[row - 1][col - 1] || target < arr[0][0])
  {
    cout<<"not avaiable "<<" ";
    return false;
  }
  //row finder function call
  int targetRow = rowFinder(arr, row, target);
  //binary search function call
  int isTarget = binarySearch(arr, targetRow, col, target);

  if(isTarget == -1)
  {
    cout<<"Output is"<<" ";
    return false;
  }
  else
  {
    cout<<"Output is"<<" ";
    return true;
  }
}
//driver code
int main()
{
  int arr[3][3]={1 , 2 , 3 , 4 , 7, 8, 10, 12, 15},target;
  cout<<"Enter target number "<<endl;
  cin>>target;
  cout<<searchTarget(arr,3,3,target);
}
