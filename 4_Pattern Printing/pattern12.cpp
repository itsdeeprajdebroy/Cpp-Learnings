#include <iostream>
using namespace std;
//solid half diamond
int main(){
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<endl;
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < i; j++){
       cout<<"* ";
    }
     cout<<endl;
  }
  for(int i = 1; i <= (n - 1); i++){
    for(int j = 0; j < (n - i); j++){
       cout<<"* ";
    }
     cout<<endl;
  }
  return 0;
}
