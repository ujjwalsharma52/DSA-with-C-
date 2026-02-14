//write a program to find the given amount is how many notes are 500,200,100,50,20,10 are using switch
#include<iostream>
using namespace std;
int main(){
  int amount;
  cout<<"enter the value of amount :";
  cin>>amount;
  switch(amount){
    case 500:
      cout<<"The amount is in five hundreds.";
      break;
    case 200:
      cout<<"The amount is in two hundreds.";
      break;
    case 100:
      cout<<"The amount is in hundreds.";
      break;
    case 50:
      cout<<"The amount is in fifty.";
      break;
    case 20:
      cout<<"The amount is in twenties.";
      break;
    case 10:
      cout<<"The amount is in tens.";
      break;
    default:
      cout<<"Invalid amount.";
  }
}