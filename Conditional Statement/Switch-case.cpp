#include "iostream"
using namespace std;
//Basic Calculator using switch case
int main(){
   float num1,num2;
   cout<<"Enter 2 numbers"<<endl;
   cin>>num1>>num2;
   char oper;
   cout<<"Enter any one among '+' or '-' or '*' or '/'"<<endl;
   cin>>oper;
   //switch(expression/constant/character)
   switch (oper) {
     case '+':cout<<"Output is "<<(num1+num2)<<endl;
             break;//break is required other wise other case statement will be executed

     case '-':cout<<"Output is "<<(num1-num2)<<endl;
             break;

     case '*':cout<<"Output is "<<(num1*num2)<<endl;
             break;

     case '/':cout<<"Output is "<<(num1/num2)<<endl;
             break;

     default :cout<<"Enter a valid operator"<<endl;

   }

   return 0;
}
