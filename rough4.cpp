#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // char name[100] = "abc";
    // cout << name;

    // char A[100] = cin.get();
    // int len = 1;
    // int i = 0;
    // while(A[i]!= '\n'){
    //     len++;
    //     cout << A;
    //     A[i] = cin.get();
    //     i++;
    // }
    // cout<<'\n';
    // cout <<"length "<<len;
    // cout << A;
    
     char sentence[100];
     int temp = cin.get();
     int len = 0;
     // jab taak input ma we press enter it will taking input from user acc to
     // while condition
     while(temp!='\n'){
        sentence[len++] = temp;
        temp = cin.get();
     }
     // it require null character for termination.
     sentence[len] = '\0';
     cout << sentence<<endl;
     cout << len << endl;


    return 0;
}