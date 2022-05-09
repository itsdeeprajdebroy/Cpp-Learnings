#include<iostream>
using namespace std;
//peak index in a mountain array

int peakIndexInMountainArray(int arr[], int n) {
    int start = 0, end = n - 1, mid = 0;
    while(start <= end)
    {
        mid = (start + end)/2;
        if(mid == 0)
        {
            if(arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        else if(mid == n - 1)
        {
            if(arr[mid - 1] > arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        else if(arr[mid] > arr[mid - 1] && arr[mid + 1] < arr[mid])
        {
            return mid;
        }
        else if(arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else if(arr[mid] > arr[mid + 1])
        {
            end = mid - 1;
        }
    }
    return -1;
}

    //driver code
    int main(){
      int arr[100],size;
      cout<<"Enter array size "<<endl;
      cin>>size;
      cout<<"Enter Array "<<endl;
      for(int i = 0; i < size; i++){
         cin>>arr[i];
      }
      cout<<endl;
      int ans = peakIndexInMountainArray(arr,size);
      cout<<"peak is "<<ans;
      return 0;
    }
    //driver code
