#include<iostream>
using namespace std;

void printer(int *newptr)
{
  cout<<*newptr<<endl;
}

void update(int *newptr)
{
  *newptr = *newptr + 1;
}

void arrprinter(int *arr , int size)
{
  ++arr[2];
}

int main()
{
  int newNum = 10;
  int *ptr = &newNum;
  printer(ptr);
  (*ptr)++;
  printer(ptr);
  cout<<"Before-> "<<*ptr<<endl;
  update(ptr);
  cout<<"After-> "<<*ptr<<endl;
  printer(ptr);
  int arr[3] = {1,2,3};
  arrprinter(arr , 3);
  cout<<arr[2];
  return 0;
}
