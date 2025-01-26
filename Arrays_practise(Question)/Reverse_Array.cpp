//Q: Reverse an Array.
#include <iostream>
using namespace std;

 void reverseArray(int arr[], int n){
   // My approach.
   
   int temp;
 for(int i = 0; i < n/2; i++){
   temp = arr[i];   // Time complexity: O(N)
   arr[i] = arr[n-1-i];
   arr[n-1-i] = temp;
 }
    
   
for(int j = 0; j < n; j++){
  cout << arr[j] <<endl;
}

  
}


int main() {

  int arr[] = {10, 20, 30, 45, 60, 80, 90};
  int n = sizeof(arr)/sizeof(int);
  reverseArray(arr, n);

  return 0;
}