#include <bits/stdc++.h>
using namespace std;
//unique number of occurences of integers
bool uniqueOcc(int arr[], int size){
  unordered_map<int,int> myMap;
  unordered_set<int> mySet;
  for(int i = 0; i < size; i++){
    myMap[arr[i]]++;
  }
  unordered_map<int,int>::iterator itr;
  for(itr = myMap.begin(); itr != myMap.end(); itr++){
    mySet.insert(itr->second);
  }
return mySet.size() == myMap.size();
}

int main(){
  int arr[100],size;
  cout<<"Enter array size "<<endl;
  cin>>size;
  cout<<"Enter Array "<<endl;
  for(int i = 0; i < size; i++){
     cin>>arr[i];
  }
  cout<<endl;
  cout<<uniqueOcc(arr,size)<<endl;
  return 0;
}
