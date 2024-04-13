#include <stdio.h>
struct complex{
    int a;
    int b;
};
void complex(){
    struct complex z1;
    z1.a = 10;
    z1.b = 15;
    printf("z1 = %d+i%d\n",z1.a,z1.b);

    struct complex z2;
    z2.a = 9;
    z2.b = 15;
    printf("z1 = %d+i%d\n",z2.a,z2.b);
};
struct students{
    char name[30];
    int roll;
    char dept[10];
};
void students(){
    struct students s1;
    s1.name[30] = "Rakibul Islam Mondal";
    s1.roll = 34900123031;
    s1.dept[10] = "CSE";
};
//Structure for a Rectangle
struct Rectangle{
    int length;
    int width;
}r1,r2,r3;  // we can initialize structure name like that also.
int main(){
    int area;
    // declaration structure 
    struct Rectangle r;
    /*
    //declaration and Initialize
    struct Rectangle r = {15,10}
    */
   r.length = 15;
   r.width = 10;
   area = r.length * r.width;
   printf("Area of your rectangle is %d \n",area);
   complex();
}