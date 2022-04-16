#include "iostream"
using namespace std;

int main(){
  int a=5,b=6;

  cout<<(a & b)<<endl;//bitwise and

  cout<<(a | b)<<endl;//bitwise or

  cout<<(a ^ b)<<endl;//bitwise xor

  cout<<(8 << 2)<<endl;//bitwise left shift

  cout<<(2 << 30)<<endl;

  cout<<(1000000000 << 2)<<endl;

  cout<<(8 >> 2)<<endl;//bitwise right shift

  cout<<(~a)<<endl;

}
