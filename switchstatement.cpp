#include <iostream>
using namespace std;
int main(){
  int ch='1';
  int num =1;
  cout<<endl;
  switch(ch){//num
    case 1:
      cout << "first number " << endl;
      break;
    case '1':switch(num){
      case 1:cout<<"value of num is"<<num <<endl;
    }
      cout << " character one" << endl;
      break;
    default:
      cout << "it is default case" << endl;
      break;
  }
  cout<<endl;
  return 0;
}