#include<iostream>
using namespace std;

int func1(int n){
  n++;
  return n;
}
int func2(int n){
  int funcOutput;
  n++;
  funcOutput = func1(n);
  return funcOutput;
}
int func3(int n){
  int funcOutput;
  n++;
  funcOutput = func2(n);
  return funcOutput;
}
int func4(int n){
  int funcOutput;
  n++;
  funcOutput = func3(n);
  return funcOutput;
}

int main(){
  int funcOutput;
  funcOutput = func4(8);
  cout<<funcOutput<<endl;
  cout<<"Done !! "<<endl;
  return 0;
}
