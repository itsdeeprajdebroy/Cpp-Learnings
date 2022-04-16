#include "iostream"
using namespace std;

int main(){
  int x=5,y=3,z=8,k=6;
  //Logical operators are used to check whether an expression is true or false.
  //If the expression is true, it returns 1 whereas if the expression is false, it returns 0.
  cout<<((x>y)&&(z<k))<<endl;

  cout<<((x>y)||(z<k))<<endl;

  cout<<(!(x>y))<<endl;

}
