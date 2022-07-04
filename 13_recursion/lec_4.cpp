//say digits in word
#include "iostream"
using namespace std;

void sayDigits(int n , string arr[])
{
  //base condn
  if(n == 0)
    return;
  //processing
  int digit = n % 10;
  n = n / 10;
  //reccursive function
  sayDigits(n , arr);
  cout << arr[digit] <<" ";
}

int main()
{
  string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  sayDigits(32132421 , arr);
}
