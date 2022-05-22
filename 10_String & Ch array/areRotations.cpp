#include<iostream>
#include<string>
using namespace std;
//whether Strings are rotation of each other
bool areRotations(string a , string b)
{
  if(a.length() != b.length())
    return false;

  string temp = a + a;
  int check = temp.find(b);
  if(check != string::npos)
    return true;
  else
    return false;
}

//driver code
int main()
{
  string a = "eprajde";
  string b = "deepraj";
  bool ans = areRotations(a , b);
  cout << "Strings are rotation of each other if output is '1' else '0' -> " << ans;
}
//driver code
