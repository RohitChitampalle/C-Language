#include<stdio.h>
struct address
{
    int houseno;
    int block;
    char city[100];
    char state[100];
}add;

void printAdd(struct address add);

int main(){
struct address add[5];

printf("Enter info for person 1:");
scanf("%d",&add[0].houseno);
scanf("%d",&add[0].block);
scanf("%s",add[0].city);
scanf("%s",add[0].state);

printf("Enter info for person 2:");
scanf("%d",&add[1].houseno);
scanf("%d",&add[1].block);
scanf("%s",add[1].city);
scanf("%s",add[1].state);

printf("Enter info for person 3:");
scanf("%d",&add[2].houseno);
scanf("%d",&add[2].block);
scanf("%s",add[2].city);
scanf("%s",add[2].state);

printf("Enter info for person 4:");
scanf("%d",&add[3].houseno);
scanf("%d",&add[3].block);
scanf("%s",add[3].city);
scanf("%s",add[3].state);

printf("Enter info for person 5:");
scanf("%d",&add[4].houseno);
scanf("%d",&add[4].block);
scanf("%s",add[4].city);
scanf("%s",add[4].state);

 printAdd(add[0]);
 printAdd(add[1]);
 printAdd(add[2]);
 printAdd(add[3]);
 printAdd(add[4]);
    return 0;
}
void printAdd(struct address add){
    printf("Address is :%d, %d, %s, %s\n",add.houseno,add.block,add.city,add.state);
}