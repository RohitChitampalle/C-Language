#include<stdio.h>
void sum(int a);
void _sum(int* a);
int main(){
    int a =6;
    _sum(&a);
    printf("number is %d\n",a);
    // sum(a);
    // printf("Number is %d\n",a);
    // return 0;
}
void _sum(int* a){
    *a=(*a)+(*a);
    printf("sum is %d\n",*a);
}
// void sum(int a){
//     a=a+a;
//     printf("sum is %d\n",a);
// }