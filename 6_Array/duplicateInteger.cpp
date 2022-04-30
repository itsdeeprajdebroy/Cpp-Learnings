#include<iostream>
using namespace std;
//find duplicate in an array of n+1 integers
int duplicateInteger(int arr[],int size){
   int sum = 0,n = (size - 1),arraySum = 0,index=0;
   sum = (n * (n + 1))/2;
   while(index != size){
     arraySum = arr[index] + arraySum;
     index++;
   }
   int output = arraySum - sum;
   return output;
}

int main(){
  int arr[100],size,outputVal;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  outputVal = duplicateInteger(arr,size);
  cout<<"Duplicate Number is "<<outputVal;
  return 0;
}
