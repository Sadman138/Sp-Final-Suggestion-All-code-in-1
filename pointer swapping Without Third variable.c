#include<stdio.h>
int main(){
int A=10,B=40;
int *ptr1=&A;
int *ptr2=&B;

*ptr1=*ptr1+*ptr2;
*ptr2=*ptr1-*ptr2;
*ptr1=*ptr1-*ptr2;

printf("%d %d",*ptr1,*ptr2);


}