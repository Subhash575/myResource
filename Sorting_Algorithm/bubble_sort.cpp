#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
    //how many times iterate.
    for(int i = 1; i <= n-1; i++){
        // in this loop we can do comparison.
        for(int j = 0; j <= n-i-1; j++){
            if(a[j]>a[j+1]){
            swap(a[j], a[j+1]);
            }
        }
    }
}

int main(){
    int a[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(a)/sizeof(int);
    bubble_sort(a, n);
    for(int x: a){
        cout << x <<", ";
    }

    return 0;
}