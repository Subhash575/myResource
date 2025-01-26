//problem: print 1 to N number.
#include <iostream>
using namespace std;

void Print(int n){
    
    //Base condition.
    if(n == 1){
        cout << n <<" ";
        return;
    }

    Print(n-1);
    cout << n <<" ";
}

int main(){
    int n;
    cin >> n;
    Print(n);

    return 0;
}
//Similar for N to 1 but print statement change.