#include <iostream>
using namespace std;

void printarray() {

}
  //declare
  int main(){
  int number[15];
  //accessing an array
  cout<<"values at 14 index "<<number[14]<<endl;// give garbag value

  //cout <<"value at 20 index"<<number[20]<<endl;

  //initilising an array
  int second[3]={5,7,11};

//accesing an array
cout<<"value at 2 index"<<second[2]<<endl;

int third[15]={2,7};

int n=15;
cout<<"printing the array"<<endl;

//print the array
for(int i=0;i<n ;i++){
  cout<<third[i]<<" ";// we only initialized first two elements, so others will be garbage values

int fourth[10]={0};
n=10;
cout<<"printing the array "<<endl;\
//print the array
for(int i=0; i<n;i++){
  cout<<fourth[i]<<" ";
}

// initing all location with 1 not possible with below line
int fifth[10]={1};
n=10;
cout<<"printing the array"<<endl;
// print thr array
for(int i=0; i<n; i++){
  cout<<fifth[i]<<" ";
}

}




cout<<endl<<"everthing is fine "<<endl<<endl;

  return 0;
}