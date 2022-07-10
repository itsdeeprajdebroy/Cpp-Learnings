//check if array is sorted
#include "iostream"
using namespace std;

bool isSorted(int arr[] , int size)
{
  //base condn
  if(size == 0 || size == 1)
    return true;

  if(arr[0] > arr[1])
    return false;
  //reccursive Relation
  return isSorted(arr + 1 , size - 1);
}

int main()
{
  int arr[5] = {2, 4, 7, 8, 9};
  bool ans = isSorted(arr , 5);
  if(ans)
    cout << "It is sorted ";
  else
    cout << "It is not sorted";
}
