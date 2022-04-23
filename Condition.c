#include<stdio.h>

int main (){
    int s;
    int a;
    printf("Enter the Number : ");
    scanf("%d",&a);
    // //for (int i = 1; i <= 10; i++)
    
    //    if (i>=1 && i<= 5)
    //    {
    //        printf("Is Gold\n");
           
    //    }else if(i>=6 && i<= 10)
    //    {
    //    printf("Is Silver\n");
           
    //    }
    int i=1;
    while (i<=10)
    {
        
        printf("%d\n", a*i);
        i++;
    }
    
     
    return 0;
}