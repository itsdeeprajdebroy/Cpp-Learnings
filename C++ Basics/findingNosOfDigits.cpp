#include<iostream>
using namespace std;
//finding number of digits
int main(){
   int num,count=0,rem=0;
   cout<<"Enter a number "<<endl;
   cin>>num;
   while(num != 0){
      rem = num % 10;
      count++;
      num = num / 10;
   }
   cout<<"Number of digits "<<count;

return 0;
}
