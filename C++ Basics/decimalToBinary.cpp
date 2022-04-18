#include<iostream>
#include<math.h>
using namespace std;
//decimal to binary conversion for positive number
int main(){
   int num,bits=0,ans=0,i=0;
   cout<<"Enter a number "<<endl;
   cin>>num;
   while(num != 0){
      bits = num & 1;
      ans = ans + (bits * pow(10,i));
      num = num >> 1;
      i++;
   }
   cout<<"Binary is "<<ans;
return 0;
}
