#include<iostream>
using namespace std;
//hollow full pyramid
int main(){
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<endl;
  for(int i = 1; i <= (n - 1); i++){
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
  for(int l = 0; l < n; l++ ){
   cout<<"* ";
}
  return 0;
}
