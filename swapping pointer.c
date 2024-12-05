#include<stdio.h>
int main(){
int x=10,y=20;
int *ptr1,*ptr2;
ptr1=&x;
ptr2=&y;
int temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;

printf("%d\n",*ptr1);
printf("%d\n",*ptr2);



}