
#include<stdio.h>
int main(){
int x=20,y=10;
printf("Before swapping num1 is %d and num 2 is %d\n",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("After swapping num1 is %d and num 2 is %d",x,y);


}