#include<bits/stdc++.h>
using namespace std;
//find fixed point in a sorted array
int fixedPoint(int arr[], int size){
  int start = 0, end = size - 1, mid = 0;
  while(start <= end){
    mid = (start) + (end - start)/2;//to avoid overflow
    if(arr[mid] == mid){
      return mid;
    }
    else if(arr[mid] > mid){
      end = mid - 1;
    }
    else{
      start = mid + 1;
    }
 }
return -1;
}

int main(){
  int arr[100],size,target;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  // cout<<binary_search(arr, arr + size, target)//binary search in build(return index)
  cout<<fixedPoint(arr,size)<<endl;
  return 0;
}
