#include <iostream>
using namespace std;

void reverse(int arr[],int n){
  int start=0;
  int end=n-1;

  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

void printarray(int arr[],int n){

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int arr[6]={3,5,-9,21,5,7};
  int urr[5]={0,3,4,55,8,};

  reverse(arr ,6);
  reverse(urr,5);

  printarray(arr,6);
  printarray(urr,5);

}