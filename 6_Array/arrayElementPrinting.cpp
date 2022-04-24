#include<iostream>
using namespace std;

void printArray(char arr[] , int size){
  arr[2] = 'q';
  cout<<"Function printing "<<endl;
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  char arr[5] = {'a','b','c','d','e'};
  printArray(arr , 5);
  cout<<"Main printing "<<endl;
  for(int i=0; i < 5; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
