#include "iostream"
using namespace std;
//printing 1 to n in decremented order
int main(){
  int num,sum=0;
  cout<<"Enter a number "<<endl;
  cin>>num;
  for(int i = num ; i > 0 ; i--){
    cout << i << " ";
  }
  cout<<endl;
  
  //sum of n natural numbers using for
  for(int i = 1 ; i <= num ; i++){
    sum = sum + i;
  }
  cout<<"Sum is "<<sum<<endl;
  return 0;
}
