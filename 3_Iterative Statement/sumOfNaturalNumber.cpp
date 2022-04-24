#include "iostream"
using namespace std;
//sum of n natural numbers using while
int main(){
  //method 1
  int n,i=1,sum=0;
  cout<<"Enter a number "<<endl;
  cin>>n;
  while(i <= n){
    sum = sum + i;
    i++;
  }
  cout<<"method 1 sum is "<<sum<<endl;

  //method 2
  sum=0;
  while(n != 0){
    sum=sum+n;
    n--;
  }
  cout<<"method 2 sum is "<<sum<<endl;
  return 0;
}
