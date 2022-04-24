#include "iostream"
using namespace std;
//printing 1 to n in decremented order
int main(){
  int num;
  cout<<"Enter a number "<<endl;
  cin>>num;
  while(num != 0){
    cout<<num<<" ";
    num--;//num=num-1
  }
  return 0;
}
