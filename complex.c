#include<stdio.h>
struct complex
{
     int real;
    int img;
};

int main(){
   
  struct  complex number1={1,2};
  struct complex *ptr=&number1;
    printf("real is %d\n",ptr->real);
    printf("img is %d\n",ptr->img);

    return 0;
}
