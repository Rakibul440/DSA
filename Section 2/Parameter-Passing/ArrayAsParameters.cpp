#include <stdio.h>
#include <iostream>
using namespace std;


void func(int A[],int n){  // can be writen as *A also
    for(int i = 0; i<n;i++){  //cant use fore each loop
        cout << A[i]<<"\t";
    }
}

int main(){
    int A[] = {10,20,30,40,50};
    int n = 5;
    for(int i : A){
        cout << i<<"\t";
    }
    cout << "\n--------------------------------"<<endl;
    func(A,n);
    return 0;
}