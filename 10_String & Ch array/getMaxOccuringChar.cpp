#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
 {
     // Your code here
    int max;
    char min = str[0];
    map<char,int> myMap;
    for(int i = 0; i < str.length(); i++)
    {
      myMap[str[i]]++;
    }
    max = myMap[str[0]];
    for(int i = 1; i < str.length(); i++)
    {
      if(myMap[str[i]] >= max)
      {
        if(myMap[str[i]] > max)
        {
          min = str[i];
          max = myMap[str[i]];
        }
        else if(myMap[str[i]] == max)
        {
          if(min > str[i])
          {
            min = str[i];
          }
        }
      }
    }
    return min;
 }

 int main()
 {
   string s = "fsutxzbosm";
   cout <<"maximum occuring character is -> " << getMaxOccuringChar(s);
   return 0;
 }
