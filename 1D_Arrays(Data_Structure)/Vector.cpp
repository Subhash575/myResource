// VECTOR(Dynamic Array)or(Data Structure):-
/*It is same as array but it size can be change when vector(array) capacity
will be full and you add other element it size will automatically change and
become double of it intially size.*/
//You can access it element in O(1) or constant time.
//Vector can be used to create dynamic 1D and 2D Arrays.
/*Unlike arrays vectors are passed by value to a function, you may can still
pass them by reference if need arises*/
// Pass by value: void fn (vector <int> v){ }
// Pass by reference: void fn (vector <int> &v){ }

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector defination or intialization.
    // vector <int> arr = {1, 2, 3, 4, 5};
    
    // Fill Constructor: Another method to intialize the vector.
    /* Her 10(total elements) and '7' is value of each element*/
    vector <int> arr(10, 7);


    //pop_back() fn delete array last element.
    arr.pop_back();

    // push_back() func for add element in the end of the array.
    arr.push_back(16);
   /*Using push_back() fn the capacity of vector(dynamic array) become double.*/
   
   // print all element.
   for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << endl;
    
   }
    
    //size of vector Or No of  elements
    // cout << arr.size()<< endl;

    // capacity of element(How many elements it can able to stored)
    // cout << arr.capacity()<< endl;






    return 0;
}