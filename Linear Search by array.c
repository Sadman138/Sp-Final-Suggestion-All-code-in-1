#include<stdio.h>
int main(){
int num[]={10,2,5,20,35,46,85};
int value,pos=-1,i;
printf("Enter The valu You Want to Search ");
scanf("%d",&value);

for(i=0;i<7;i++)
{
if (value == num[i]){
pos=i+1;
break;
}
}
if(pos==-1){
printf("not found");
}
else{
printf("Number found at position %d",pos);
}















}