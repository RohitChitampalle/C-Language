#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={1 , 9.8 , "rohit"};
   // printf("Name is %s\n ,Roll is %d\n,cgpa is %f",s1.name,s1.roll,s1.cgpa);

    struct student *ptr=&s1;
     printf("roll is %d\n ,\n cgpa is %f\n" ,(*ptr).roll,(*ptr).cgpa);
    
    

    return 0;
}