#include<stdio.h>


int main (){
    
int marks  ;
printf("Enter marks :");
scanf("%d", &marks);
if (marks<40)
{
  printf("Fail\n");
  printf("Try your beter in next but superb\n");
}
else if (marks>40 && marks<60)
{
  printf("Avarage\n");
  printf("Please study hard otherwise it will be looks good\n");
}
else if (marks>60 && marks<80)
{
  printf("Second class\n");
  printf("Have more hard work deppend on you ,other will be encourage\n");
}else if (marks>80 && marks<100)
{
  printf("Frist Class\n");
  printf("Great work have to study in multiple books als\n");
}
else
printf("Invalid Marks!");

printf("Thank You visit again\n");

  
    return 0;
}