#include<iostream>
using namespace std;
//finding transpose of matrix
void transpose(int arr[3][3],int row,int col){
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      if(i <= j)
        swap(arr[i][j],arr[j][i]);
      cout<<arr[i][j]<<" ";
    }
 cout<<endl;
 }
}

int main(){
  int arr[3][3]={1 , 2 , 3 , 4 , 5, 6, 7, 8, 9};
  transpose(arr,3,3);
}
