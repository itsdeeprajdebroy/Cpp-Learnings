#include "iostream"
using namespace std;

int main(){
  int a=8,b=6;

  cout<<(a/b)<<endl;//output is integer part only

  cout<<(8.0/b)<<endl;//output is decimal

  float ans=(a/b);
  cout<<ans<<endl;//output is integer part only

  float ans1=(8.0/b);
  cout<<ans1<<endl;//output is decimal
}
