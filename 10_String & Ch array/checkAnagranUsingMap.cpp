#include<iostream>
#include<string>
#include<map>
using namespace std;
//it will work for both small and capital character
bool checkAnagram(string a , string b)
{
  map<char , int> myMap ;

  //incrementing value
  for(int i = 0; i < a.length(); i++)
  {
    myMap[a[i]]++;
  }

  //decrementing value
  for(int i = 0; i < b.length(); i++)
  {
    myMap[b[i]]--;
  }

  map<char , int> :: iterator itr;
  for(itr = myMap.begin(); itr != myMap.end(); itr++)
  {
    if(itr -> second != 0)
    {
      return false;
    }
  }
  return true;
}
//driver code
int main()
{
  string a = "deepraj";
  string b = "Peedjar";
  cout << "The string is -> " << checkAnagram(a , b);
}
//driver code
