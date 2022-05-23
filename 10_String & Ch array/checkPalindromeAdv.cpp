#include<bits/stdc++.h>
using namespace std;
//function to convert upper to lower case
char lowerCase(char ch)
{
  if((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z'))
  {
    return ch;
  }
  else
  {
    int val = 'a' - 'A';
    char lowerCaseCh = ch + val;
    return lowerCaseCh;
  }
}

bool checkPalindrome(string s)
{
    // Write your code here.
    string p = "";
    for(int i = 0; i < s.length(); i++)
    {
       if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'))
       {
           p.push_back(s[i]);
       }
    }
    // transform(p.begin(),p.end(),p.begin(), ::tolower);//using stl to transform upper to lower case
    for(int i = 0; i < p.length(); i++)
    {
      p[i] = lowerCase(p[i]);
    }
    int start = 0, end = p.length() - 1;
    while(start < end)
    {
        if(p[start] != p[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
  string s = "c1 O$d@eeD o1c";
  cout <<"its a palindrome if output is '1' else not -> " << checkPalindrome(s);
  return 0;
}
