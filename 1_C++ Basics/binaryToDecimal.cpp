#include<iostream>
#include<math.h>
using namespace std;
//binary to decimal conversion
int main(){
   unsigned int num,bits=0,ans=0,i=0;
   cout<<"Enter a binary number "<<endl;
   cin>>num;
   while(num != 0){
      bits = num % 10;
      ans = ans + (bits * pow(2,i));
      num = num / 10;
      i++;
   }
   cout<<"Decimal is "<<ans;
return 0;
}
