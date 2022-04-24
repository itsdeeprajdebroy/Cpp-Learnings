#include<iostream>
using namespace std;

void func1(int n){
  n++;
  cout<<"func1 Number is "<<n<<endl;
}
void func2(int n){
  n++;
  func1(n);
  cout<<"func2 Number is "<<n<<endl;
}
void func3(int n){
  n++;
  func2(n);
  cout<<"func3 Number is "<<n<<endl;
}
void func4(int n){
  n++;
  func3(n);
  cout<<"func4 Number is "<<n<<endl;
}

int main(){
  func4(8);
  cout<<"Done !! "<<endl;
  return 0;
}
