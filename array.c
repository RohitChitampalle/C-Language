#include<stdio.h>
int main(){
    int marks[3];
   

    

    printf("Enter Phy marks:");
    scanf("%d",&marks[0]);
    
    printf("Enter Che marks:");
    scanf("%d",&marks[1]);
    
    printf("Enter Math marks:");
    scanf("%d",&marks[2]);

   printf("Your phy is %d\n",marks[0]+2);
   printf("Your che is %d\n",marks[1]+2);
   printf("Your math is %d\n",marks[2]+2);
    

    
    
return 0;    
}