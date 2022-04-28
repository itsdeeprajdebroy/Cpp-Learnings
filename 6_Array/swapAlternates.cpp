#include<iostream>
using namespace std;
//swap alternates in an Array
void swapAlternates(int arr[],int size){
  int i = 0,j = 1,temp = 0;
  while(i < size && j < size){
    // temp = arr[j];
    // arr[j] = arr[i];
    // arr[i] = temp;
    swap(arr[i],arr[j]);//predefined function
    i+=2;
    j+=2;
  }
}

int main(){
  int arr[100],target,size;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  swapAlternates(arr,size);
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }
}
