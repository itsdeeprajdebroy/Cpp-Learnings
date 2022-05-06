#include<bits/stdc++.h>
using namespace std;
//total number of occurence
int firstOccu(int arr[], int size, int target){
  int start = 0, end = size - 1, mid = 0, ans = 0;
  while(start <= end){
    mid = (start) + (end - start)/2;//to avoid overflow
    if(arr[mid] == target){
       ans = mid;
       end = mid - 1;
    }
    else if(arr[mid] > target){
       end = mid - 1;
    }
    else{
       start = mid + 1;
    }
 }
return ans;
}

int lastOccu(int arr[], int size, int target){
  int start = 0, end = size - 1, mid = 0, ans = 0;
  while(start <= end){
    mid = (start) + (end - start)/2;//to avoid overflow
    if(arr[mid] == target){
       ans = mid;
       start = mid + 1;
    }
    else if(arr[mid] > target){
       end = mid - 1;
    }
    else{
       start = mid + 1;
    }
 }
return ans;
}

int main(){
  int arr[100],size,target,occurenceFirst,occurenceLast;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter a Target "<<endl;
  cin>>target;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  occurenceFirst = firstOccu(arr,size,target);
  occurenceLast = lastOccu(arr,size,target);
  cout<<"Total Number of Occurence is "<<(occurenceLast - occurenceFirst + 1)<<endl;
  return 0;
}
