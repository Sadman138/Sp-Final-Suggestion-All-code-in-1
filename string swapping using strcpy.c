#include<stdio.h>
int main(){

char ch1[20]="Bangladesh";
char ch2[20]="India";
char temp[20];

strcpy(temp,ch1);
strcpy(ch1,ch2);
strcpy(ch2,temp);



printf("%s\n",ch1);
printf("%s\n",ch2);








}