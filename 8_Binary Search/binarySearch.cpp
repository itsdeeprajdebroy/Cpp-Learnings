#include<bits/stdc++.h>
using namespace std;
//binary search implementation
int binarySearch(int arr[], int size, int target){
  int start = 0, end = size - 1, mid = 0;
  while(start <= end){
    mid = (start/2) + (end/2);//to avoid overflow
    if(arr[mid] == target){
      return mid;
    }
    else if(arr[mid] > target){
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
  cout<<"Enter a Target "<<endl;
  cin>>target;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  // cout<<binary_search(arr, arr + size, target)//binary search in build(return index)
  cout<<binarySearch(arr,size,target)<<endl;
  return 0;
}
