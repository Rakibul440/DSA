#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
        int length;
        int width;
    };

int main(){
    int a = 10;
    int *p;  //Pointers declaration
    p = &a;  //initialize value (P store the memory address of a )

    printf("%d \n", *p);  //it gives the value of a using pointers
    printf("%d\n",p); // it gives the memory address of a
    printf("%d\n",&a); // it gives the memory address of a also

    /*-----------------------------*/

    //Create an array an access elements with pointer

    int A[5] ={1,2,3,4,5};    //allocate into stack
    int *ptr;
    ptr = A ; //or ptr = &A[0] , ptr = &A[1]....
    for (int i = 0; i<5;i++){
        printf("%d\t",ptr[i]);
    }

    /*----------------------------*/
    printf("\n-------------------------------\n");
    //create an array into heap
    int *x;
    x = (int *)malloc(5 * sizeof(int)); //initialize the size of the array
    x[0] = 10; x[1] = 20; x[2] = 30 ; x[3]=40; x[4] = 50;

    for(int i = 0;i<5;i++){
        printf("%d\t",x[i]);
    }
    
    free(x); //for deallocating the memory which is created in heap

    printf("\n----------------------------------\n");
    //Every Pointers Takes Same memory
    int *ptr1;
    float *ptr2;
    double *ptr3;
    char *ptr4;
    struct Rectangle *ptr5;

    printf("%d\n",sizeof(ptr1));
    printf("%d\n",sizeof(ptr2));
    printf("%d\n",sizeof(ptr3));
    printf("%d\n",sizeof(ptr4));
    printf("%d\n",sizeof(ptr5));
    return 0;
}