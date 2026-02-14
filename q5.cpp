#include <iostream>
using namespace std;
int isodd(int &a){
  if(a%2!=0){
  return 1;
}
return 0;
}
int main(){
  int a;
  cin>>a;
  int *ptr =&a;
  cout<<ptr<<endl;
  bool odd= isodd(a);
  cout<<odd;
  return 0;

  
}