#include<iostream>
#include<string>
using namespace std;

bool checkAnagram(string a , string b)
{
  int freq[26] = {0},count = 0;

  //incrementing freq elements
  for(int i = 0; i < a.length(); i++)
  {
    int index;
    index = a[i] - 'a';
    freq[index]++;
  }

  //decrementing freq elements
  for(int i = 0; i < b.length(); i++)
  {
    int index;
    index = b[i] - 'a';
    freq[index]--;
  }

  //checking if freq elements are 0 or not
  for(int i = 0; i < 26; i++)
  {
    if(freq[i] != 0)
    {
      count++;
    }
  }

  if(count == 0)
  {
    return true;
  }
  else
    return false;
}
//driver code
int main()
{
  string a = "deepraj";
  string b = "peedjar";
  cout << "The string is -> " << checkAnagram(a , b);
}
//driver code
