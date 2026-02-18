#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

void update(int arr[],int n){
  cout<<endl<<"inside the function "<<endl;

  // updateing arrayfirst element
  arr[0]=120;

  //updating the array
  for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";

  }cout<<endl;
  cout<<"going back to main function "<<endl;
}

int main(){
  int arr[3]={1,2,3};// update the array becasuse main function give the address of
  update(arr,3);

  //printing the array
  for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}