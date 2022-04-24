#include<iostream>
#include<math.h>
using namespace std;
//prime number checking program
int main(){
   int num,div=2;
   cout<<"Enter a number "<<endl;
   cin>>num;
   if(num == 1)
       cout<<"its not a prime number "<<endl;
   else{
     while(true){
        if(num % div != 0){
          div++;
          if(div == num)
            break;
          }
          else{
            break;
          }
        }
        if(div == num){
          cout<<"its a prime number "<<endl;
        }
        else{
          cout<<"its not a prime number "<<endl;
        }
      }
return 0;
}
