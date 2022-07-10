//sum of array elements
#include "iostream"
using namespace std;

int findSum(int arr[] , int size , int sum)
{
  //base condn
  if(size == 0)
    return sum;

  //processing
  sum = sum + arr[0];

  //function call
  return findSum(arr + 1 , size - 1 , sum);
}

int main()
{
  int arr[8] = {2, 4, 4, 8, 2, 50, 45, 87};
  int ans = findSum(arr , 8 , 0);
  cout << "Sum is -> " << ans << endl;
}
