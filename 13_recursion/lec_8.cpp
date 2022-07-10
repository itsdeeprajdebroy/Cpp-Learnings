//Linear search using reccursion
#include "iostream"
using namespace std;

bool linerSearch(int arr[] , int size , int key)
{
  //base condn
  if(size == 0)
    return false;

  //processing
  if(arr[0] == key)
  {
    return true;
  }
  else
  {
    return linerSearch(arr + 1 , size - 1 , key);
  }
}

int main()
{
  int arr[8] = {2, 4, 4, 8, 2, 50, 45, 87};
  bool ans = linerSearch(arr , 8 , 100);
  cout << "It is present if '1' and not if '0' -> " << ans << endl;
}
