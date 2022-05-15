#include<iostream>
#include <cstring>
using namespace std;

int getLength(char arr[])
{
  int index = 0, count = 0;
  while(arr[index] != '\0')
  {
    count++;
    index++;
  }
return count;
}

int main()
{
  char arr[10] = "hello";
  char arr2[10] = "vghgh";

  // cout << getLength(arr);
  cout << strlen(arr) << endl;
  cout << strcmp(arr, arr2);

}
