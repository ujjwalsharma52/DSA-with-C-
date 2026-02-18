#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    //int mid=(start+end)/2; // This line is not needed here
    int mid = start + (end - start) / 2; 
    while (start <= end) {
        //int mid = start + (end - start) / 2; // To avoid potential overflow

        if (arr[mid] == key) {
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
int main(){
  int even[6]={2,4,6,8,12,18};
  int odd[5]={3,8,11,14,16};


  int evenindex=binarySearch(even,6,12);
  cout<<"Index of 12 is "<<evenindex<<endl;
  int oddindex=binarySearch(odd,5,16);
  cout<<"Index of 16 is "<<oddindex<<endl;
  return 0;
}