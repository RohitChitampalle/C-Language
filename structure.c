#include<stdio.h>
#include<string.h>
struct student
{
 int roll;
 float cgpa;
 char name[100]; 
 };

int main(){
struct student cse[100];
cse[0].roll=1;
cse[0].cgpa=9.9;
strcpy(cse[0].name,"Rohit");

cse[1].roll=2;
cse[1].cgpa=9.9;
strcpy(cse[1].name,"santanu");

cse[2].roll=2;
cse[2].cgpa=9.9;
strcpy(cse[2].name,"deepali");




printf("Student name is %s\n",cse[0].name);
printf("Student roll number is %d\n",cse[0].roll);
printf("Student cgpa is %f\n",cse[0].cgpa);

printf("\n");

printf("Student name is %s\n",cse[2].name);
printf("Student roll number is %d\n",cse[2].roll);
printf("Student cgpa is %f\n",cse[2].cgpa);

    return 0;
}