
#include <stdio.h>
//Using Pointer 
void swap ( int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp ;
}
int main(){
    int x =10,y=20;
    swap(&x,&y);  //passing memory address
    printf ("%d is x",x);
}