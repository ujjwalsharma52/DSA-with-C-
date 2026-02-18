#include <iostream>
using namespace std;
int main(){
  int n;
  int a=0,b=1;
  cout<<a<<" "<<b<<" ";
  cout<<"enter the value of n"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++){
    int nextnumber=a+b;
cout<<nextnumber<<" ";
a =b;
b=nextnumber;

  }
}
