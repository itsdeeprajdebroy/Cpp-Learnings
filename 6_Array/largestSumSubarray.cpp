#include<iostream>
using namespace std;
//Largest Sum Contiguous Subarray(kadane's algo)
int maxSubArraySum(int arr[],int size){
  int sum = 0,maxAns = arr[0],index = 0,startIndex = 0,endIndex = 0,s = 0;
  while(index < size){
    sum = sum + arr[index];
    if(sum > maxAns){
      maxAns = sum;
      startIndex = s;
      endIndex = index;
    }
    if(sum < 0){
      sum = 0;
      s = index + 1;
    }
    index++;
  }
  cout<<"Start Index is "<<startIndex<<endl;
  cout<<"End Index is "<<endIndex<<endl;
  cout<<"Sub Array is "<<endl;
  for(int i = startIndex;i <= endIndex;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"Largest Sum is ";
  return maxAns;
}

int main(){
  int arr[100],size;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  cout<<maxSubArraySum(arr,size)<<endl;
  return 0;
}
