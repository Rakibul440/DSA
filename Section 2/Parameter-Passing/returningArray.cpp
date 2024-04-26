#include <iostream>
using namespace std;

int * func(int);

int main(){
    int size = 5;
    int *ptr;
    ptr = func(size);  // now that created array is stored into ptr pointer;

    for (int i = 0 ; i<size; i++){
        cout << ptr[i] << "\t";
    }
}

int * func(int n){
    int *p;
    p = new int[n];

    for(int i = 0;i<n;i++){
        p[i] = i+1;
    }

    //it will create an array into heap memory using pointer ,
    //now we can return this array into the main function

    return p;
}