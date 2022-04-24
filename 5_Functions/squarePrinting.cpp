#include<iostream>
using namespace std;

void squarePrinting(int n){
  for(int i = 1; i <= n; i++){
    cout<<(i * i)<<" ";
  }
}

int main(){
  int num;
  cout<<"Enter a number "<<endl;
  cin>>num;
  squarePrinting(num);
  return 0;
}
