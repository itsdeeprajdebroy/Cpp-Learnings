#include<iostream>
#include<limits.h>
using namespace std;
//reversing an integer in its range
int main(){
  int num,rem=0,ans=0;
  cout<<"Enter a number "<<endl;
  cin>>num;
  while(num != 0){
    rem = num % 10;
    if((INT_MAX / 10) < ans || (INT_MIN / 10) > ans){
      ans = 0;
      break;
    }
    ans = ans * 10 + rem;
    num = num / 10;
  }
  if(ans == 0){
    cout<<"Reverse integer is out of integer range "<<ans;
  }
  else{
    cout<<"Reverse integer is "<<ans;
  }
return 0;
}
