#include<iostream>
using namespace std;
//finding number of bits
int main(){
   int num,count=0,bits=0;
   cout<<"Enter a number "<<endl;
   cin>>num;
   while(num != 0){
      bits = num & 1;
      count++;
      num = num >> 1;
   }
   cout<<"Number of bits "<<count;

return 0;
}
