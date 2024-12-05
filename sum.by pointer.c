//sum by pointer
#include<stdio.h>
int main(){
int x=10,y=20,sum=0;;
int *ptr1,*ptr2;
ptr1=&x;
ptr2=&y;
sum=*ptr1+*ptr2;
printf(" The sum is %d",sum);
}