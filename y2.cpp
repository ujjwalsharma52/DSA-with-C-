#include <iostream>
using namespace std;int findUnique(int *arr, int size)
{
    //Write your code here
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];// a^a=0
    }
    return ans;
}



int main(){
    int arr[7]={1,2,3,1,2,6,6};
    int size=sizeof(arr)/sizeof(int);
    
    cout<<"size of array is "<<size<<endl;
    
    //find unique element in an array
    int ans=findUnique(arr,size);
    cout<<"the unique element in the array is "<<ans<<endl;
    
    return 0;
}