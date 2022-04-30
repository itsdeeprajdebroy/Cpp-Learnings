#include<iostream>
using namespace std;
//cyclically rotate an array by 1
void rotateAnArray(int arr[],int size){
  int i = size - 2,var = arr[size - 1];
  while(i >= 0){
    arr[i + 1] = arr[i];
    i--;
  }
  arr[0] = var;
}

int main(){
  int arr[100],size;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  rotateAnArray(arr,size);
  for(int i = 0; i < size; i++){
     cout<<arr[i]<<" ";
  }
  return 0;
}
