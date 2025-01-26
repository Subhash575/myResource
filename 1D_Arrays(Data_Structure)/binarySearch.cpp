//Binary Search:-
//It is efficient algorithm which work on sorted or monotonic array.
// monotonic means: non- increasing or non- decreasing graph.
/* Time complexity= log2(n) */

#include <iostream>
using namespace std;

int binary_search(int *arr, int n, int key){
    int s = 0;
    int mid;  // remember here s, mid, e all are index.
    int e = n - 1;
    while(s<=e){
        mid = (s+e)/2;
        if(key == arr[mid]){
            return mid;
        }
        if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}


int main(){
    int arr[] = {1, 2, 10, 11, 19, 29, 30};
    int n = sizeof(arr)/sizeof(int);  // n is size or length of array
    int key;// key is the element we want to find
    cout <<"Enter the key:"<< endl;
    cin >> key;

    int index = binary_search(arr, n, key);
    if(index != -1){
        cout <<"The key is present at index "<< index << endl;
    }
    else{
        cout << "The key is not found"<< endl;
    }



    return 0;
}