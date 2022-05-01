#include<iostream>
using namespace std;
//finding coloumn sum
void colSum(int arr[3][3],int row,int col){
  for(int i = 0; i < col; i++){
    int sum = 0;
    for(int j = 0; j < row; j++){
      sum = sum + arr[j][i];
    }
 cout<<"Sum is "<<sum<<endl;
 }
}

int main(){
  int arr[3][3]={1 , 2 , 3 , 4 , 5, 6, 7, 8, 9};
  colSum(arr,3,3);
}
