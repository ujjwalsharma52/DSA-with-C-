#include <iostream>
using namespace std;

int getpivot(int arr[],int n){

  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;
  while(s<e){

    if(arr[mid]>=arr[0]){
      s=mid+1;
    }
    else{
      e=mid;
    }
    mid=s+(e-s)/2;
  }
  return s;// also we return e as both are equal here
}
int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    //int mid=(start+end)/2; // This line is not needed here
    int mid = start + (end - start) / 2; 
    while (start <= end) {
        //int mid = start + (end - start) / 2; // To avoid potential overflow

        if (arr[mid] == key) {
          int mid = start + (end - start) / 2; 
            return mid; // Key found at index mid
        } else if (arr[mid] < key) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
        mid=(start+end)/2; // This line is also not needed here
    }

    return -1; // Key not found
}
int findposition(int arr[],int n,int key){
  int pivot=getpivot(arr,n);
  if(key>=arr[pivot] && key<=arr[n-1]){
    //  BS search in second line
    return binarySearch(arr+pivot,n-pivot,key)+pivot;
  }
  else{
    // BS search in first line
    return binarySearch(arr,pivot,key);
  }
}