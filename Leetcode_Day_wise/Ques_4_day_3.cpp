//sort 0 , 1 , 2
#include<iostream>
using namespace std;
//Approach 1
void sort012(int arr[], int n)
{
    int count0 = 0, count1 = 0, index = 0;
    while(index != n)
    {
        if(arr[index] == 0)
        {
            count0++;
        }
        else if(arr[index] == 1)
        {
            count1++;
        }
        index++;
    }
    int var = 0;
    index = 0;
    while(index != n)
    {
        switch (var)
        {
          case 0: arr[index] = 0;
                  count0--;
                  if(count0 == 0)
                  {
                      var = 1;
                  }
                  break;
          case 1: arr[index] = 1;
                  count1--;
                  if(count1 == 0)
                  {
                      var = 2;
                  }
                  break;
          case 2: arr[index] = 2;
                  break;
        }
        index++;
    }
}

//Approach 2(Dutch National Flag Algo)--> One pass Solution
void sort012UsingAlgo(int arr[] , int size)
{
  int low = 0, mid = 0, high = size - 1;
  while(mid <= high)
  {
    switch(arr[mid])
    {
      case 0: swap(arr[mid] , arr[low]);
              mid++;
              low++;
              break;

      case 1: mid++;
              break;

      case 2: swap(arr[mid] , arr[high]);
              high--;
              break;
    }
  }
}

int main()
{
  int arr[] = {2, 0, 1, 1, 1};
  sort012UsingAlgo(arr, 5);
  for(int i = 0; i < 5; i++)
  {
    cout<<arr[i] <<" ";
  }
}
