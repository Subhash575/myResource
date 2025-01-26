#include<iostream>
#include<set>
using namespace std;

int main(){

    int arr[] = { 2, 3, 4, 5, 5, 6};
    set<int>st;
    for(int x: arr){
        st.insert(x);
    }
    for(int x: st){
        cout << x; 
    }

    return 0;
}