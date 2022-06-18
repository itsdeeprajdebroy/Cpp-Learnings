#include<iostream>
using namespace std;

int main()
{
  int num = 5;
  cout<<"Value of num ->"<<num<<endl;
  cout<<"Address of num -> "<<&num<<endl;

  //declaring pointer
  int *ptr = &num;
  cout<<*ptr<<" "<<num<<" "<<&num<<" "<<&ptr<<" "<<ptr<<" "<<endl;

  //declaring pointer
  double d = 4.3;
  double *ptr2 = &d;
  cout<<*ptr2<<" "<<d<<" "<<&d<<" "<<&ptr2<<" "<<ptr2<<" "<<endl;

  //declaring a null pointer
  int *ptr3 = 0;
  ptr3 = &num;
  cout<<*ptr3<<endl;

  //basic pointer application
  int newNum = 5;
  int *ptr4 = &newNum;
  (*ptr4)++;
  cout<<newNum<<" "<<*ptr4;
}
