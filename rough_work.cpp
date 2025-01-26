// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     int star = 1;
//     int space = n-1;

//         for (int j = 1; j <= n; j++) {
//              if(star == j){
//                 for(int k = 1; k <= star; k++){
//                     cout << "*";
//                 }
//                 star++;
//              }
//              if(space == n-j){
//                 for(int l = 1; l <= space; l++){
//                     cout << " ";
//                 }
//                 space--;
//              cout <<"\n"; 
//              }
//         }
    
    
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
       int s = 0;
       int e = arr.size() -1;
       int diff = INT_MAX; // here we take greater differences.
       int p1 = arr[s];
       int p2 = arr[e];
       while(s < e){
           if(diff > abs(arr[s]+ arr[e]-x)){
               diff = abs(arr[s]+ arr[e]-x);
               p1 = arr[s];
               p2 = arr[e];
           }
           if(arr[s] + arr[e] < x){
               // here s increase so that arr[s] + arr[e] will closest to x.
            //    {10, 22, 28, 29, 30, 40}
               s++;
           }
           else{
               // here e decrease so that arr[s] + arr[e] will closest to x.
               e--;
           }
           
          
       }
       return {p1, p2};
           
}