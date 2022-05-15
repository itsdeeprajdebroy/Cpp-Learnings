#include<iostream>
#include <cstring>
using namespace std;

void reverseChArray(char arr[])
{
  int length = strlen(arr), start = 0;
  int  end = length - 1;
  while(start < end)
  {
    swap(arr[start], arr[end]);
    end--;
    start ++;
  }
  cout <<"reversed array is " << arr;
}

int main()
{
  char arr[100];
  cout << "Enter a string that to be reversed " << endl;
  cin >> arr;
  reverseChArray(arr);
}
