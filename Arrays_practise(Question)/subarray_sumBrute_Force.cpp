/*Q: Print the sum of each subarray and find out the largest sum.*/
#include <iostream>
using namespace std;

void printArray(int *arr, int n){
    int sum;
    int largest_sum = 0; 
    for(int i = 0; i <n; i++){
        for(int j = i; j<n; j++){
            sum = 0;
            for(int k = i; k <= j; k++){   //Time complexity: O(N^3)
                sum = sum + arr[k];
            }
            cout << sum << endl; 
            if(largest_sum < sum){
                largest_sum = sum;
            }
            
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


// These is the code for printing sum of each subarray.

/*void printArray(int *arr, int n){
    int sum;
    for(int i = 0; i <n; i++){
        for(int j = i; j<n; j++){
            sum = 0;
            for(int k = i; k <= j; k++){
                sum = sum + arr[k];
            }
            cout << sum << endl;   
        }
    }
}*/