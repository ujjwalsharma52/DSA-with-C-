#include <iostream>
using namespace std;


int findDuplicate(<int> arr, int n){
	
	int ans=0;
	for(int =0;i<arr.size();i++){
		ans=ans^arr[i];
			
	}
	for(inti=0;i<arr.size();i++){
		ans=ans^i;
	}return 0;	
	
}
int main(){
    vector<int> arr = {1, 3, 4, 2, 2};
    int n = arr.size();
    
    int duplicate = findDuplicate(arr, n);
    
    cout << "The duplicate element is: " << duplicate << endl;
    
    return 0;

}


