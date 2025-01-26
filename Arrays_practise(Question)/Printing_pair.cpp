#include <iostream>
using namespace std;

void printArray(int arr[], int n){
  for(int i = 0; i < n-1; i++){
    for(int j = 1+i; j <= n-1; j++){
      cout <<"(" << arr[i]<<","<<arr[j]<<")";
    }                                          
    cout <<'\t';
  }
}      // Time complexity: O(N^2)



int main(){
  int arr[] = {1, 2, 3, 4};
  int n = sizeof(arr)/sizeof(int);
  printArray(arr, n);


  return 0;
}