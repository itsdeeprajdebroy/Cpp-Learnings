#include <iostream>
using namespace std;
//inverted full pyramid
int main(){
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<endl;
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
