#include<bits/stdc++.h>
using namespace std;
//pivot elements
int pivotElements(int arr[], int n){
  int start = 0, end = n - 1, mid = 0;
  if(arr[start] < arr[end])
    return arr[start];
  while(start < end){
    mid = (start) + (end - start)/2;//to avoid overflow
    if(arr[mid] >= arr[0]){
       start = mid + 1;
    }
    else if(arr[mid] < arr[0]){
       end = mid;
    }
  }
 return start;
}

int main(){
  int arr[100],size,target;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  cout<<endl;
  int ans = pivotElements(arr,size);
  cout<<"Pivot element is "<<arr[ans];
  return 0;
}
