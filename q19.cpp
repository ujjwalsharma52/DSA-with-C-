#include <iostream>
using namespace std;
int main(){

  int n;
  cout<<"enter the value of n :"<<endl;
  cin>>n;

  for(int i=0;i<=n;i++){
    for(int j=1;j<=5;j++){
      if(i+j==0){
        break;
      }
      cout<<i<<" "<<j<<endl;
    }
  }
}