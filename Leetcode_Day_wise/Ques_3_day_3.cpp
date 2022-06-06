//Segregate 0s and 1s
#include<iostream>
using namespace std;

//Approach 1
class Solution{
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int count0 = 0, index = 0;
        while(index != n)
        {
            if(arr[index] == 0)
                count0++;
            index++;
        }
        index = 0;
        bool flag = false;
        while(index != n)
        {
            if(count0 == 0)
            {
                flag = true;
            }
            if(count0 != 0)
            {
                arr[index] = 0;
                count0--;
            }
            if(flag)
            {
                arr[index] = 1;
            }
            index++;
        }
    }
};

//Approach 2(Dutch National Flag Algo)--> One pass Solution
void sort01UsingAlgo(int arr[] , int size)
{
  int low = 0, mid = 0, high = size - 1;
  while(mid <= high)
  {
    switch(arr[mid])
    {
      case 0: mid++;
              low++;
              break;

      case 1: swap(arr[mid] , arr[high]);
              high--;
              break;
    }
  }
}

int main()
{
  int arr[] = {1, 0, 1, 1, 0};
  sort01UsingAlgo(arr, 5);
  for(int i = 0; i < 5; i++)
  {
    cout<<arr[i] <<" ";
  }
}
