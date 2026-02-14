#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int getmin(int num[],int n){
  int min=INT_MAX;
  for(int i=0;i<n;i++){
    if(num[i]>min){
      min=num[i];
    }
  }
  //returing min value 
  return min;
}
int getmax(int num[],int n){
   
  int max= INT_MIN;
  for(int i=0;i<n ;i++){
    if(num[i]>max){
      max=num[i];
    }
  }
  // returing max value 
  return max;
}


int main(){
  int size;
  cin>>size;

  int num[100];

  //taking input in array
  for(int i=0;i<size ;i++){
    cin>>num[i];

  
  }
  cout<<"minimun element in array are"<<getmin(num,size) <<endl;
  cout<<"maximun element in array are "<<getmax(num ,size)<<endl;


}