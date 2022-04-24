#include<iostream>
using namespace std;

void evenNumber(int n){
  for(int i = 2; i <= n; i += 2){
    cout<<i<<" ";
  }
}

int main(){
  int num;
  cout<<"Enter a number "<<endl;
  cin>>num;
  evenNumber(num);
  return 0;
}
