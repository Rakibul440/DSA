#include <iostream>
using namespace std;
/*Passing parameters as reference 
now &a reference of x and &b is reference of y
*/
void swap(int &a,int &b){
    int temp ;
    temp = a ;
    a = b;
    b = temp;
}
int main(){
    int x = 10, y = 20;
    swap(x,y);

    cout << "Now x = "<< x<<"and  y = "<<y;
    return 0;
}