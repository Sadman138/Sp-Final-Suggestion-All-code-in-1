#include<stdio.h>
struct myStructure{
int mynum;
char myname[100];
char myletter;
};
int main(){
struct myStructure b1;
b1.mynum=10;
strcpy(b1.myname,"sadman");
b1.myletter='B';
printf("mynum is %d\n",b1.mynum);
printf("myname is %s\n",b1.myname);
printf("myletter is %c\n",b1.myletter);
}