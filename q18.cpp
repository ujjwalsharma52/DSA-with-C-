#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n:"<<endl;
  cin>>n;

  for(int i=0;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<i<<" "<<j<<endl;
    }
  }
}