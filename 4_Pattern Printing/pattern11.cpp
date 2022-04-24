#include <iostream>
using namespace std;
//hollow diamond
int main(){
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<endl;
  for(int i = 1; i <= n; i++){
     for(int j = 0; j < (n - i); j++){
        cout<<" ";
     }
     if(i != 1){
        cout<<"*";
     for(int k = 0; k < (2 * i - 3); k++){
          cout<<" ";
       }
          cout<<"*"<<endl;
     }
     else{
        cout<<"*"<<endl;
     }
   }
   for(int i = 1; i <= n; i++){
      for(int j = 0; j < (i - 1); j++){
         cout<<" ";
      }
      if(i != n){
         cout<<"*";
      for(int k = 0; k < (2 * (n - i + 1) - 3); k++){
           cout<<" ";
        }
           cout<<"*"<<endl;
      }
      else{
         cout<<"*"<<endl;
      }
    }
  return 0;
}
