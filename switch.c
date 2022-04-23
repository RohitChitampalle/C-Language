#include <stdio.h>

int main()
{
    int num;

    /* Input a number from user */
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    if(num % 2==0)
    {
        /* If n%2 == 0 */
        
            printf("Number is Even\n");
    }        

    else
    {    /* Else if n%2 == 1 */
         
            printf("Number is Odd\n");
           
    }

    return 0;
}