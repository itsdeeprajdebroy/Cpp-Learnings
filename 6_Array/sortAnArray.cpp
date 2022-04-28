#include<iostream>
using namespace std;
//sort an Array of 0, 1 & 2
void sortArray(int arr[],int size){
  int arrayIndex = 0,var1=0,count0=0,count1=0,count2=0;
  while(arrayIndex < size){
    var1 = arr[arrayIndex];
    switch (var1) {
      case 0: count0+=1;
              break;
      case 1: count1+=1;
              break;
      case 2: count2+=1;
              break;
    }
    arrayIndex++;
  }
  int arrayIndex1 = 0,var2 = 0;
  if(arrayIndex == size){
    while(arrayIndex1 < size){
      switch (var2) {
        case 0: arr[arrayIndex1]=0;
                count0=count0 - 1;
                if(count0 == 0)
                   var2 = 1;
                break;
        case 1: arr[arrayIndex1]=1;
                count1=count1 - 1;
                if(count1 == 0)
                   var2 = 2;
                break;
        case 2: arr[arrayIndex1]=2;
                break;
      }
        arrayIndex1++;
    }
  }
}

int main(){
  int arr[100],size;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int arrayIndex = 0; arrayIndex < size; arrayIndex++){
     cin>>arr[arrayIndex];
  }
  sortArray(arr,size);
  for(int arrayIndex = 0; arrayIndex < size; arrayIndex++){
      cout<<arr[arrayIndex]<<" ";
  }
  return 0;
}
