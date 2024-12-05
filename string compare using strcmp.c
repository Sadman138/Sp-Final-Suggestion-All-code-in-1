#include<stdio.h>
int main(){
char ch1[]= "Sadman";
char ch2[]= "Sadman";
int d= strcmp(ch1,ch2);
if(d==0) {
printf("The two values are equal");
}
else{
printf("The two value are not equal");
}
}