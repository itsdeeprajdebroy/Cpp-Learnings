#include <iostream>
using namespace std;
//inverted half pyramid
int main(){
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<endl;
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < (n - i + 1); j++){
       cout<<"* ";
    }
     cout<<endl;
  }
  return 0;
}
