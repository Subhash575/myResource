#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    // it cover the negative test case:-
    //{-3, -2, -1, -5, -4} in these case max is -1
    bool AllNeg = true;
    /*INT_MIN(macro) is use so that it intially stored value bcs comparing
     -ve no is crutial */
    int largest = INT_MIN;
    for(int x:A){
        if(x>0){
            AllNeg = false;
        }
        else{ 
            // comparing -ve no
            largest = max(largest, x);
        }
    }
    if(AllNeg){
        return largest;
    }
    //kadane_logic:
    int s =0;
    int max_sum = 0;
    for(int y: A){
        if(s + y < 0)
        s = 0;
        else{
            s = s + y;
            max_sum = max(max_sum, s);
        }
    }
    return max_sum;
     
}

int main(){
    vector<int> A;
    cout << "Enter size of array:"<<endl;
    int n;
    cin >> n;
    int m;
    cout << "Enter the value of element:"<<endl;
    for(int i = 0; i < n; i++){
        cin >> m;
        A.push_back(m);
    }

    int result = maxSumSubarray(A);
    cout <<"Maximum subarray sum:"<<endl;
    cout << result << endl;
    
    return 0;
}

