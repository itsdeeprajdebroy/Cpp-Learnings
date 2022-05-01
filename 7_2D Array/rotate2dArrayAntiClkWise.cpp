#include<iostream>
using namespace std;
//rotate a 2d array 3*3 by 90 anti clock wise
void reverseMatrix(int arr[3][3],int row,int col){
  for(int i = 0; i < row; i++){
    int size = col - 1;
    for(int j = 0; j < (col/2);j++){
      swap(arr[j][i],arr[size][i]);
      size--;
    }
  }
}

void transpose(int arr[3][3],int row,int col){
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      if(i <= j)
        swap(arr[i][j],arr[j][i]);
    }
  }
}

int main(){
  int arr[3][3]={1 , 2 , 3 , 4 , 5, 6, 7, 8, 9};
  transpose(arr,3,3);
  reverseMatrix(arr,3,3);
  //printing 2d rotated array
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
