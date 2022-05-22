#include<iostream>
#include<string>
using namespace std;

char flip(char bit)
{
  if(bit == '0')
  {
    return '1';
  }
  else
    return '0';
}

int flipBit(string a , char bit)
{
  int count = 0;
  for(int i = 0; i < a.length(); i++)
  {
    if(a[i] != bit)
    {
      count++;
    }
    bit = flip(bit);
  }
  return count;
}

//driver code
int main()
{
  string a = "00011000101";
  int countOne = flipBit(a , '0');
  int countTwo = flipBit(a , '1');
  int ans = min(countOne , countTwo);
  cout << "Minimum Flip required is -> " << ans;
}
//driver code
