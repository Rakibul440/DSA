#include <stdio.h>
#include <string.h>

struct Students {
    char name[25];
    int roll;
    char dept[10];
};

void student(){
    struct Students student[50] = {
        {"Rakibul Islam Mondal",0136031,"CSE"},
        {"Clay Janson",013032,"ECE"},
        {"Hannah",013033,"IT"}
    };
    //Print Frist Students
    printf("Student Name : %s\nUniversity Roll : %d\nDepartment : %s\n",student[0].name,student[0].roll,student[0].dept);
};

int main(){
    student();
    return 0;
}