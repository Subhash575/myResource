// Maximum subarray sum(kadane's algorithm)
/*It is the best optimal approach to solve problem in subarray sum*/
// here -ve edge case not cover.(see in OneNote).
#include <iostream>
using namespace std;


void printArray(int arr[], int n){
  int current_sum = 0;
  int max_sum = 0;
  for(int i = 0; i<n; i++){
      if(current_sum + arr[i] < 0){
        current_sum = 0;
      } 
      else{
        current_sum = current_sum + arr[i];
        max_sum = max(max_sum, current_sum);
      }
  }
  cout <<"The maximum subarray sum is "<< max_sum << endl;
}   



int main(){
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr)/sizeof(int);
  printArray(arr, n);

    return 0;
}