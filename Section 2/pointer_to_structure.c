#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int width;
};
struct Students {
    // char name[20];
    int roll;
};
int main()
{
    struct Rectangle r = {10,15};
    struct Rectangle *ptr = &r ; //declearation

    //initialization
    (*ptr).length = 20; /*or*/ ptr ->length = 25; 
 
    printf ("%d",ptr->length);

    printf("\n-------------------------------\n");
    /*Now pointer Accessing Structure outside of main memory (heap)*/

    struct Students *s; //declaration pointer
    s = (struct Students *)malloc(sizeof(struct Students)); //memory allocation
    // s->name = "Rakibul";
    s->roll = 1535;

    // printf("Name of the student is %s :", s->name);
    printf("Roll Number of the student is : %d",s->roll);



}