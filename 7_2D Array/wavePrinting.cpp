#include<iostream>
using namespace std;
//wave matrix printng
void wavePrinting(int arr[5][5], int row, int col){
  int startCol = 0, endCol = col - 1, startrow = 0, endRow = row - 1, count = 0, target = (row * col);
  while(true){
    if(count == target){
      break;
    }
    for(int i = startCol; i <= endCol; i++){
      cout<<arr[startrow][i]<<" ";
      count++;
    }
    if(count == target){
      break;
    }
    startrow++;
    for(int i = endCol; i >= startCol; i--){
      cout<<arr[startrow][i]<<" ";
      count++;
    }
    if(count == target){
      break;
    }
    startrow++;
  }
}

int main(){
  int arr[5][5]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
  wavePrinting(arr,5,5);
}
