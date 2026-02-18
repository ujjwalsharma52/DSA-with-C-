#include <iostream>
using namespace std;
int main(){
  char ch[5]={'a','b','c','r','p'};
  cout<<ch[0]<<endl;
  cout<<ch[1]<<endl;
  cout<<ch[2]<<endl;
  cout<<ch[3]<<endl;
  cout<<ch[4]<<endl;
  //cout<<ch[5]<<endl;

  cout <<"printing the array"<<endl;
  // print the array
  for(int i=0;i<5;i++){
    cout<<ch[i]<<" ";

  }

  cout<<"printing done "<<endl;
  double firstdouble[5];
  float firstfloat[6];
  bool firstbool[9];

  cout<<endl<<"everything is fine "<<endl <<endl;
  return 0;

}
