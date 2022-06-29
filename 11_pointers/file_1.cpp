#include<iostream>
using namespace std;

int main()
{
  // int arr[10] = {0};
  // int *ptr = &arr[0];
  //Address of first block is-->(use online cpp compilers)
  /*
  cout<<"Address of first block is--> "<<arr<<endl;
  cout<<"Address of first block is--> "<<&arr[0]<<endl;
  cout<<*arr;//->value of first address of array
  cout<<(*arr + 1);//->value of first address of array will increment
  */

  /*
  cout<<sizeof(arr)<<endl;//-> 40
  cout<<sizeof(ptr)<<endl;//-> 8
  cout<<sizeof(*arr)<<endl;//-> 4
  cout<<sizeof(*ptr)<<endl;//-> 4
  */

  //character array-->
  char ch[6] = "abcde";
  char *ptr = &ch[0];
  cout<<ptr<<endl;
  return 0;
}
