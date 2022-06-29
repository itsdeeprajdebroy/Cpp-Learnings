//Common elements in all rows of a given matrix
#include <bits/stdc++.h>
using namespace std;

void printCommonElements(int mat[4][5])
{
    set<int> mySet;
	map<int , int> myMap;
	set<int>::iterator itr;
	map<int , int>::iterator itrm;
	for(int i = 0; i < 4; i++)
	{
	    mySet.clear();
	    for(int j = 0; j < 5; j++)
	    {
	        mySet.insert(mat[i][j]);
	    }
	    for(itr = mySet.begin(); itr != mySet.end(); itr++)
	    {
	        myMap[*itr]++;
	    }
	}
	for(itrm = myMap.begin(); itrm != myMap.end(); itrm++)
	{
	    if(itrm->second == 4)
	    {
	        cout<<itrm->first<<" ";
	    }
	}
}

int main() {
    int mat[4][5] = {{1, 2, 7, 4, 8},{3, 7, 8, 5, 1},{3, 7, 7, 3, 1},{8, 1, 2, 7, 9},};
	printCommonElements(mat);
	return 0;
}
