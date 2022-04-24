#include <iostream>
using namespace std;
//power of 2, eg if --> n = 16 then its a power of 2 --> 2^4
int main() {
  int n;
  cout<<"Enter a Number "<<endl;
  cin>>n;
  int count=0,bit=0;
    if(n >= 0){
        while(n != 0){
          bit = n & 1;
          n = n >> 1;
          if(bit == 1){
            count++;
              }
            }
        if(count == 1){
           cout<<"its a power of 2 "<<endl;
                }
        else{
           cout<<"its not a power of 2 "<<endl;
                }
            }
    else{
        cout<<"Enter a valid number "<<endl;
            }
    return 0;
}
