#include <iostream>
using namespace std;
//half pyramid
int main(){
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<endl;
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < (n - i); j++){
       cout<<" ";
    }
    for(int k = 0; k < i; k++){
       cout<<"* ";
    }
     cout<<endl;
  }
  return 0;
}
