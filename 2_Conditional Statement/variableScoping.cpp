#include "iostream"
using namespace std;

int main(){
  if(1){
    int n = 1;
    cout<<"First "<<n<<endl;//output-->1
    if(1){
       int n = 2;
       cout<<"Second "<<n<<endl;//output-->2
       if(1){
          cout<<"Third "<<n<<endl;//output-->2
       }
    }
    cout<<"Fourth "<<n<<endl;//output-->1
  }
   return 0;
}
