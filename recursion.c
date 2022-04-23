#include<stdio.h>
int hot(int a);
int cool(int a);
int main(){
int a;
printf("enter temp :");
 scanf("%d",&a);

if (a>= 40 && a<= 60)
    {
        printf("%d\n", hot(a));
    } else if (a>= 10 && a<= 30){
        printf("%d\n", cool(a));
    }else
    
    return 0;
}

int hot(int a){
 printf("Temperature is hot so wear cap\n");  

}
int cool(int a){
    printf("Temperature is cool wear swater come out side \n");
}