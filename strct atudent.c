#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
}
int main(){
    struct student s1={1,"Rohit",9.8};
    printf("Name is = %s/n ,Roll is %d\n,cgpa is %f",s1.name,s1.roll,s1.sgpa);

    return 0;
}