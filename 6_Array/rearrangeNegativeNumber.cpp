#include<iostream>
using namespace std;
//move all negative number to one side of array
void rearrange(int arr[],int size){
/*
  two pointers approach
  int right = 0, left = size - 1;
  while(right < left){
    if(arr[right] < 0 && arr[left] < 0){
      right++;
    }
    else if(arr[right] > 0 && arr[left] < 0){
      swap(arr[right],arr[left]);
      right++;
      left--;
    }
    else if(arr[right] > 0 && arr[left] > 0){
      left--;
    }
    else{
      right++;
      left--;
    }
  }
*/
  int ptr1 = 0, ptr2 = 0;
  while(ptr1 < size){
    if(arr[ptr1] < 0){
      swap(arr[ptr1],arr[ptr2]);
      ptr2++;
    }
    ptr1++;
  }
}

int main(){
  int arr[100],size;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  rearrange(arr,size);
  for(int i = 0; i < size; i++){
     cout<<arr[i]<<" ";
  }
  return 0;
}
