//Binary search using reccursion
#include "iostream"
using namespace std;

bool binarySearch(int arr[] , int start , int end , int key)
{
  //base condition
  if(start > end)
    return false;

  //processing
  int mid = (start + end)/2;
  if(arr[mid] == key)
    return true;
  else if(arr[mid] < key)
    return binarySearch(arr , mid + 1 , end , key);
  else
    return binarySearch(arr , start , mid - 1 , key);
}

int main()
{
  int arr[8] = {2, 4, 5, 8, 50, 55, 87};
  bool ans = binarySearch(arr , 0 , 6 , 87);
  cout << "It is present if '1' and not if '0' -> " << ans << endl;
}
