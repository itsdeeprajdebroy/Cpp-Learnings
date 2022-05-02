#include<iostream>
using namespace std;
//union and intersection of two sorted array
void printUnion(int arr1[],int arr2[],int size1,int size2){
  int i = 0, j = 0,var1 = 0, var2 = 0;
  cout<<"Union of two sorted array is "<<endl;
  while(i < size1 || j < size2){
    if(i != size1 && j != size2){
      if(arr1[i] > arr2[j]){
        if(arr2[j-1] == arr2[j] && j != 0){
          j++;
        }
        else{
          cout<<arr2[j]<<" ";
          j++;
        }
      }
      else if(arr1[i] < arr2[j]){
        if(arr1[i-1] == arr1[i] && i != 0){
          i++;
        }
        else{
          cout<<arr1[i]<<" ";
          i++;
        }
      }
      else{
        if(arr2[j-1] == arr2[j] && j != 0){
          j++;
          var1 = 1;
        }
        if(arr1[i-1] == arr1[i] && i != 0){
          i++;
          var2 = 1;
        }
        if(var1 == 0 && var2 == 0){
          cout<<arr1[i]<<" ";
          i++;
          j++;
        }
      }
    }
if(i == size1){
  if(arr2[j-1] == arr2[j]){
    j++;
  }
  else{
    cout<<arr2[j]<<" ";
    j++;
  }
}
else if(j == size2){
  if(arr1[i-1] == arr1[i]){
    i++;
  }
  else{
    cout<<arr1[i]<<" ";
    i++;
  }
  }
 }
}

void printIntersection(int arr1[],int arr2[],int size1,int size2){
  int i = 0, j = 0;
  cout<<"Intersection of two sorted array is "<<endl;
  while(i < size1 && j < size2){
    if(arr1[i] < arr2[j]){
        i++;
    }
    else if(arr1[i] > arr2[j]){
        j++;
    }
    else{
      if(arr1[i-1] == arr1[i] && i != 0){
        i++;
      }
      if(arr1[j-1] == arr1[j] && j != 0){
        j++;
      }
      else{
        cout<<arr1[i]<<" ";
        i++;
        j++;
      }
    }
  }
}


int main(){
  int arr1[100],arr2[100],size1,size2;
  cout<<"Enter size for array 1 "<<endl;
  cin>>size1;
  cout<<"Enter Array 1 "<<endl;
  for(int arrayIndex = 0; arrayIndex < size1; arrayIndex++){
     cin>>arr1[arrayIndex];
  }
  cout<<"Enter size for array 2 "<<endl;
  cin>>size2;
  cout<<"Enter Array 2 "<<endl;
  for(int arrayIndex = 0; arrayIndex < size2; arrayIndex++){
     cin>>arr2[arrayIndex];
  }
  printUnion(arr1,arr2,size1,size2);
  printIntersection(arr1,arr2,size1,size2);
  return 0;
}
