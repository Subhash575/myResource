#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of student"<< endl;
    cin >> n;
    //create(declaration of array)
    // int marks[100];
    
    int marks[100] = {-1};
    /*here we initizalise the array by -1 or (define/defination)
    In case of initialization there is no garbage value but which is not initzalise 
    are having value zero acc to length of array*/
    cout << "Enter the marks of students" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];// input
        marks[i] = marks[i]*4;
    }
    
    // update
    marks[0] = -1;

    cout << "The marks of students" << endl; 
    for (int i = 0; i < 100; i++)
    {
        cout << marks[i] <<", " ;//output
    }

    return 0;
}