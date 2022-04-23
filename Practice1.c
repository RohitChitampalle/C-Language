#include<stdio.h>

int main (){
    int breath ,hight ;
    printf("Enter breath :");
    scanf("%d",&breath);

    printf("Enter hight:");
    scanf("%d",&hight);

    int area = breath*hight;
    printf("Area of rectangle %d\n",area);

    return 0;
}