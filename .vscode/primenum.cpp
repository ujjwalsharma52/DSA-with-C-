#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=2;
  while(i<n){
    // divide hogya not prime
    if(n%i==0){
      cout<<"not prime"<<endl;

    }
    else{
      cout<<"prime"<<endl;
      //break;
    }
    i+1;

  }
}