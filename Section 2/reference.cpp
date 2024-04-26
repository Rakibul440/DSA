#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int &r = a; //actually it sets the memory address of a to r;
    cout << "the variable a is :" << a << endl;
    cout << "r is now : "<<r << endl;

    cout << "--------------------" <<endl;
    int b = 30;
    r = b;
    //now a will become 30 also 
    cout << "now a : "<<a<<endl;
    cout<< "and r : "<<r<<endl;
    return 0;
}