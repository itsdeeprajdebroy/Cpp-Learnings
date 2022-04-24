#include "iostream"
using namespace std;
//printing odd numbers
int main(){
  int num;
  cout<<"Enter a number "<<endl;
  cin>>num;
  for(int i = 1 ; i <= num ; i++){
     if(i%2 == 0){
        continue;//using continue
     }
     cout<<i<<endl;//@ i%2 == 0 it will be skipped
  }
  return 0;
}
