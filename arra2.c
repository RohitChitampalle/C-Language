#include<stdio.h>
void countOdd(int aary[],int n);
 int main()
{
int arry[]={1,62,58,66,88};
    printf("%d\n", countOdd(*arry,5));
         return 0;
}
void countOdd(int aary[],int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (aary[i] % 2 != 0)
        {
            count++;
        }
        
       printf("%d\t",aary[i]);
    }
       return count;
    
}