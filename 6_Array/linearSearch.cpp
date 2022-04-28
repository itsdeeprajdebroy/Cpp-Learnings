#include<iostream>
using namespace std;
//lenear Search
bool linearSearch(int arr[],int target,int size){
  int i = 0;
  while(i < size){
    if(arr[i] == target)
      return true;
    i++;
  }
    return false;
}

int main(){
  int arr[100],target,size;
  bool funcOp;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  cout<<"Enter Target Number "<<endl;
  cin>>target;
  funcOp = linearSearch(arr,target,size);
  cout<<"Result is "<<funcOp;
  return 0;
}
