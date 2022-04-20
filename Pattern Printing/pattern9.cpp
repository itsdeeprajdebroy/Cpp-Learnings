#include <iostream>
using namespace std;
//hollow inverted half pyramid
int main(){
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<endl;
  for(int i = 1; i <= n; i++){
    cout<<"*";
  }
    cout<<endl;
  for(int j = 0; j < (n - 1); j++){
    cout<<"*";
    for(int k = 0; k < (n - 3 - j); k++){
      cout<<" ";
    }
    if(j != (n - 2)){
      cout<<"*"<<endl;
    }
  }
  return 0;
}
