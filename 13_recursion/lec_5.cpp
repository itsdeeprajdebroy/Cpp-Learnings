//counting number of digits
#include "iostream"
using namespace std;
//integer overflow --> takes place
void sayDigits(long long int n , int count)
{
  //base condn
  if(n == 0)
  {
    cout << " Number of digit is -> " << count << endl;
    return;
  }
  //processing
  int digit = n % 10;
  n = n / 10;
  count = count + 1;
  //reccursive function
  sayDigits(n , count);
}

int main()
{
  long long int num;
  cin >> num;
  sayDigits(num , 0);
}
