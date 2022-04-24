#include<iostream>
using namespace std;
//number compliment--> eg num = 5 then its compliment comp = 2
int main(){
  int num,mask=0,ans;
  cout<<"Enter a number "<<endl;
  cin>>num;
  while(mask < num){
    mask = (mask << 1) + 1;
  }
  ans = (~num & mask);
  cout<<"Copmmpliment is "<<ans<<endl;
return 0;
}
