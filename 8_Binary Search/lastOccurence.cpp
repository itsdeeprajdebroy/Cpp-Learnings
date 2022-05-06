#include<bits/stdc++.h>
using namespace std;
//last occurence
int lastOccu(int arr[], int size, int target){
  int start = 0, end = size - 1, mid = 0, ans = -1;
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
  int arr[100],size,target;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter a Target "<<endl;
  cin>>target;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  cout<<lastOccu(arr,size,target)<<endl;
  return 0;
}
