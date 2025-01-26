#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int large = INT_MIN;  // micro is imp bcs of negative(compare) test case
    for(int x: arr){
        if(large<x){
            large = x;
        }
    }
    return large;
}

int main(){
    int n;
    cout <<"Enter the size of vector"<<endl;
    cin >>n;
    vector<int> arr;
    int a;
    cout <<"Enter the element"<<endl;
    for(int i = 0; i<n; i++){
        // here we taking vector as input from user.
        cin>>a;
        arr.push_back(a);
    }
    cout <<"printing an array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
    
    int result = largestElement(arr);
    cout <<"largest element: "<< result <<endl;

    return 0;
}