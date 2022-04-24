#include "iostream"
using namespace std;
//positive ,negative and zero checking program
int main(){
   int num;
   cout<<"Enter a number"<<endl;
   cin>>num;
   //if statement
   if(num > 0){
      cout<<"positive number"<<endl;
   }
   //else if statement
   else if(num < 0){
      cout<<"negative number"<<endl;
    }
   //else statement
   else{
      cout<<"it's 0"<<endl;
   }
   cout<<"this line is always printed"<<endl;
   return 0;
}
