#include<bits/stdc++.h>
using namespace std;

//MY APPROACH.
// void insertion_sort(int a[], int n){
//     int temp;
//     for(int i = 1; i < n; i++){
//         for(int j = i; j >= 1; j--){
//             if(a[j] < a[j-1]){
//                 temp = a[j];
//                 a[j] = a[j-1];
//                 a[j-1] = temp;
//             }
//         }
//     }
// }

// SIR APPROACH.
void insertion_sort(int a[], int n){
      
    for(int i =1; i < n; i++){

        int current  = a[i];
        int prev = i-1;
        /* loop to find the right index(correct index) where the element 
        current should be inserted */
        while(prev >= 0 && a[prev] > current){
            a[prev + 1] = a[prev];
            prev --;
        }
        a[prev + 1] = current;
    }
}


int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr, n);
    
    for(int x: arr){
        cout << x <<", ";
    }
     



    return 0;
}