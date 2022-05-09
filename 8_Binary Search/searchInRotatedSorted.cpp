#include<bits/stdc++.h>
using namespace std;
//search in rotated sorted array
int roatatedSearch(int nums[], int size, int target){
  int start = 0, end = size - 1, mid = 0;
  while(start<=end)
  {
      mid = (start+end)/2;
      if(nums[mid]==target)
          return mid;
      else if(nums[mid]>=nums[0])
      {
          if(target<=nums[mid] && target>=nums[0])
              end = mid-1;
          else
              start = mid+1;
      }
      else
      {
          if(target>=nums[mid] && target<=nums[size - 1])
              start = mid+1;
          else
              end = mid-1;
      }
  }
  return -1;
}
//driver code
int main(){
  int arr[100],size,target;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter a Target "<<endl;
  cin>>target;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  cout<<roatatedSearch(arr,size,target)<<endl;
  return 0;
}
//driver code
