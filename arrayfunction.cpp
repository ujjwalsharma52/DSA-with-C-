#include <iostream>
using namespace std ;

void printarray(int arr[] ,int size){

  cout<<"printing the array "<<endl;
  //print the array
  for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"printing done "<<endl;
}
int main(){

  //declare
  int number[15];

  //accessing an array
  cout<<"value at 14 index "<<number[14]<<endl;


  int second[3]={5,7,11};
  //accessing an element
  cout<<"value at 2 index "<<second[2]<<endl;
  
  int third[15]={2,7};

  int n=15;
  printarray(third,  n);

//initialing all location with 0
int fourth[10]={0};
n=10;
printarray(fourth, n);
//initing all location with 1 not possible with below line
int fifth[10]={1};

n=10;
printarray(fifth, n);


int fifthsize=sizeof(fifth)/sizeof(int);
cout<<"size of fifth is "<<fifthsize <<endl;

}
