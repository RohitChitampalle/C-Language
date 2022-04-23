#include<stdio.h>
typedef struct bankstr
{
    char name[100];
    int  accno;
}bks;

int main(){
    bks s1={"Rohit",358569856};
    bks *ptr=&s1;
    printf("Acc holder is : %s\n,%d",ptr->name,ptr->accno);
    return 0;
}