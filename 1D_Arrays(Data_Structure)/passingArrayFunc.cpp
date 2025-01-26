#include <iostream>
using namespace std;

void printArray(int arr[], int n){
// void printArray(int arr[] ) or void printArray(int *arr)  
/*they both are same in arr when passing function but we mostly use (*arr) to avoid confusion.

   /*In below syntax will print the 2 element in array bcs bydefault passing array means passing it address
     and address is stored by the pointer which occupay 8 bytes of memory you can
     see  8 bytes of memory by sizeof(arr)*/
    
   //   int n = sizeof(arr)/sizeof(int);

   /*acc to above calculation here 8(pointer size)/4(size of int) = 2 so that value of n is equal to 2 
   therefore only two element is print not all element to solve this problem we need to pass the array
   this so that all element will printed*/

    
   arr[0] = 100;

   /*In above you can see we update the value of array it will change value in  function as well as main
   therefore you can say that it will share same memory*/
   cout <<"In function " << endl;
    for (int i = 0; i < n; i++)
    {
       cout << arr[i] << endl;
    }



}




int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    //here n stand for size/length of array
    int n = sizeof(arr)/sizeof(int);  // (6*4)/4 = 6 element in array

    printArray(arr, n);

    cout << "In main " << endl;
    for (int i = 0; i < n; i++)
    {
       cout <<  arr[i] << endl;
    }
     cout << endl;
    
    
    
    
    return 0;
}