#include<stdio.h>
 struct student
{
    int roll;
    float cgpa;
    char name[100];
};

typedef struct computerscienceengineering
{
    int roll;
    float cgpa;
    char name[100];
}cse; 

void printInfo(struct student s1);
void print(cse s1); 
//void printInfo(struct student *rlc); 


int main(){
 struct student s1={2,9.8,"Rohit"};
 cse r1={4,9.9,"deepali"};
print(r1);
 //printInfo(s1);   
//printf("Name is %s\n",s1.name);
    return 0;
}
void print(cse s1){
printf("Name is %s\n,cgpa is %f\n,roll is %d\n",s1.name,s1.cgpa,s1.roll);    
}

void printInfo(struct student s1){

printf("Name is %s\n,cgpa is %f\n,roll is %d\n",s1.name,s1.cgpa,s1.roll);

}