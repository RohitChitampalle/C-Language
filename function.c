#include<stdio.h>
#include<math.h>
//Fuction decleration 
int aos(int side);
float aoc(float rad);
int aor(int lenght,int hight);
//void printTable(int n);
int main(){
  //Function Call
  int side;
  printf("Enter the Square side :");
  scanf("%d",&side);

aos(side);

    return 0;
}
int aos(int side){
  printf("Area of square is %d\n", side*side);
}
float aoc(float rad){
  printf("Area of Circle %f\n ", 3.14*rad*rad);
}
int aor(int lenght,int hight){
  printf("Area of Rectangle is %d\n",lenght*hight);
}