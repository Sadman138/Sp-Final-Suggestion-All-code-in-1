#include<stdio.h>
void num(int n){
if(n==0)
return;
else
num(n-1);
printf(" %d",n);


}
int main(){
int n;
scanf("%d",&n);
num(n);


}
