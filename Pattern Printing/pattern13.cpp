#include <iostream>
using namespace std;
//half number triangle
int main(){
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<endl;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i ; j++){
       cout<<j<<" ";
    }
     cout<<endl;
  }
  return 0;
}
