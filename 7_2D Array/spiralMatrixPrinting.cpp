#include<iostream>
using namespace std;
//spiral matrix printng
void spiralPrinting(int arr[4][4], int row, int col){
  int startCol = 0, endCol = col - 1, startrow = 0, endRow = row - 1, count = 0, target = (row * col);
  while(count < target){
    for(int i = startCol; i <= endCol; i++){
      cout<<arr[startrow][i]<<" ";
      count++;
    }
    startrow++;
    for(int i = startrow; i <= endRow; i++){
      cout<<arr[i][endCol]<<" ";
      count++;
    }
    endCol--;
    for(int i = endCol; i >= startCol; i--){
      cout<<arr[endRow][i]<<" ";
      count++;
    }
    endRow--;
    for(int i = endRow; i >= startrow; i--){
      cout<<arr[i][startCol]<<" ";
      count++;
    }
    startCol++;
  }
}

int main(){
  int arr[4][4]={1 , 2 , 3 , 4 , 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  spiralPrinting(arr,4,4);
}
