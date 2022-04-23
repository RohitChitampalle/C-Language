#include<stdio.h>

int main (){
    int temp;
   printf("Enter temperature :");
   scanf("%d/n",&temp);

if (temp>40)
{
    printf("Temperature is too hot use cap\n");
}else if (temp>30 && temp< 50)
{
    printf("Temperature is medium\n");
}else if (temp>15 && temp< 30)
{
  printf("Temperature is Cool Ware sweater\n");
}else
// {
// printf("Just now No any Temperature like that");
// }
   return 0;
}