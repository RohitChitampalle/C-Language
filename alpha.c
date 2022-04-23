#include<stdio.h>

int main(){
 char ch;
 printf("Enter ther Alphapet :");
 scanf("%s",&ch);
 if (ch>='a' && ch<='z')
 {
     printf("Lower case \n");
 }else if (ch>='A' && ch<='Z')
 {
    printf("Upper case\n");
 }else
{
 printf("Invalid Case !\n");
 printf("Please try again!\n"); 
}
printf("Thak you Visit Again \n");
 



    return 0;
}