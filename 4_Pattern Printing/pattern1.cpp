#include <iostream>
using namespace std;
//square pattern
int main(){
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
       cout<<"* ";
    }
     cout<<endl;
  }
  return 0;
}
