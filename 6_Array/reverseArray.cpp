#include<iostream>
using namespace std;
//Reverse array
void reverseArray(int arr[],int size){
  int i = 0,j = (size - 1),temp=0;
  while(i < j){
    temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
    i++;
    j--;
  }
  cout<<endl;
}

int main(){
  int arr[100],size;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  reverseArray(arr,size);
  for(int i = 0; i < size; i++){
     cout<<arr[i]<<" ";
  }
  return 0;
}
