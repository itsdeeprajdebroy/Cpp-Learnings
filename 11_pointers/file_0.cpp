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
  cout<<newNum<<" "<<*ptr4<<endl;

  //coping old pointer to a new pointer
  newNum = 10;
  int *ptr5 = &newNum;
  int *ptr6 = ptr5;
  cout<<*ptr5<<" "<<*ptr6<<" "<<newNum<<endl;

  //incrementing pointer
  newNum = 100;
  int *ptr7 = &newNum;
  ptr7++;
  cout<<*ptr7<<endl;//-> ptr7 will point towards some garvage value
  return 0;
}
