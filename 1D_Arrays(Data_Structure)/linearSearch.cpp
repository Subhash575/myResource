/*SEARCHING ALOGRITHM is of two type 
1. Linear Search
2. Binary Search*/

//Linear Search:-

/*linear Seach(Brute Force Technique)it is a searching alogrithm and it is use to find
 the index of element in given array */
// Here array can be sorted or unsorted.
//worst case time complexity is O(n).

#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key){

for(int i =0; i <n; i++){
    //check current element is matches with the key
    if(arr[i] == key){
        return i;
        break;
    }  
}
return -1;

}


int main(){
int arr[] = { 1, 2, 0, 10, 11, 9, 8, 5, 7};
int n = sizeof(arr)/sizeof(int);
int key;
cout << "Enter the key:"<< endl;
cin >> key;
int index = linear_search(arr, n, key);

if(index != -1){
cout <<"The key is found at index "<<index<< endl;
}
else{
    cout << "key is not found" << endl;
}

    return 0;
}