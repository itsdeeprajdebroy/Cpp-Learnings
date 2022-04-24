#include <iostream>
using namespace std;
//solid diamond
int main(){
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<endl;
  //upper
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < (n - i); j++){
       cout<<" ";
    }
    for(int k = 0; k < i; k++){
       cout<<"* ";
    }
     cout<<endl;
  }
  //lower
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < (i - 1); j++){
       cout<<" ";
    }
    for(int k = 0; k < (n - i + 1); k++){
       cout<<"* ";
    }
     cout<<endl;
  }
  return 0;
}
