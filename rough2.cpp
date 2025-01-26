#include <bits/stdc++.h>
using namespace std;

void printTriangle(int n) {
    int space = 0;
    int star = 2*n-1;
    for(int i = 1; i <=n; i++){
        
        for(int j = 1; j <= space; j++){
            cout <<" ";
        }
        space++;

        for(int k = 1; k <= star; k++){
            cout <<"*";
        }
        star = star - 2;;
        cout << "\n";
    }
    }

int main(){
   cout <<"Enter the value of n: "<<endl;
   int n;
   cin >>n;
   printTriangle(n);

    return 0;
}