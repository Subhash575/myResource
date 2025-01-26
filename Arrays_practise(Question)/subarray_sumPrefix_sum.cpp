//Q:Subarray sum using prefix approach.
#include <iostream>
using namespace std;

void printArray(int *arr, int n){
    int sum;
    int largest_sum = 0;
    int ps[n];
    ps[0] = arr[0];
    for(int l = 1; l < n; l++){
        ps[l] = ps[l-1] + arr[l];
    }
     
    for(int i = 0; i <n; i++){
        for(int j = i; j<n; j++){
        //    sum = ps[j] - ps[i-1]; 
        /*This code show problem because i is start from zero*/
            sum = i>0 ? ps[j] - ps[i-1] : ps[j];
            cout << sum << endl;
            largest_sum = max(largest_sum, sum);
        }
    }
    cout << "The largest sum is "<<largest_sum<<endl;
    }
    
int main(){
    int arr[] = {10, -20, 30, -40, 50, 60};
    int n = sizeof(arr)/sizeof(int);
    printArray(arr, n);


    return 0;
}
// Tjme complexity: O(N^2) = N + N^2