#include<iostream>
using namespace std;
//max min elements in an Array
int maxElement(int arr[],int size){
  int maxi = 0, i = 1;
  maxi = arr[0];
  while(i < size){
    // if(arr[i] > max){
    //   max = arr[i];
    // }
    maxi = max(maxi,arr[i]);//predefined function
    i++;
  }
  return maxi;
}

int minElement(int arr[],int size){
  int mini = 0, i = 1;
  mini = arr[0];
  while(i < size){
    // if(arr[i] < min){
    //   min = arr[i];
    // }
    mini = min(mini,arr[i]);//predefined function
    i++;
  }
  return mini;
}

int main(){
  int arr[100],size;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  cout<<"Maximum element "<<maxElement(arr,size)<<endl;
  cout<<"Minimum element "<<minElement(arr,size)<<endl;
  return 0;
}
