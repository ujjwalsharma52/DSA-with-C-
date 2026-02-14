#include <iostream>
using namespace std;

int main(){

  int a,b;
  cout<<"enter the value of a :";
  cin>>a;
  cout<<"enter thye value of b :";
  cin>>b;

  char op;
  cout<<"enter the operation you want to perform "<<endl;
  cin>>op;

  switch( op){
  case '+':
    cout<<"the sum is : "<<a+b;
    break;
  case '-':
    cout<<"the difference is : "<<a-b;
    break;
  case '*':
    cout<<"the product is : "<<a*b;
    break;
  case '/':
    cout<<"the quotient is : "<<a/b;
    break;
  default:
    cout<<"invalid operation";
  }
}