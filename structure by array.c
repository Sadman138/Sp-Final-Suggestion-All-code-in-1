#include<stdio.h>
struct person{
int age;
float slary;


};
int main(){

int i;

struct person person[4];
printf("Enter The information \n");
for(i=0;i<4;i++){
printf("Enter the age of person[%d]\n",i);
scanf("%d",&person[i].age);
printf("Enter the salary of person[%d]\n",i);
scanf("%f",&person[i].slary);
}

for(i=0;i<4;i++){
printf("\nthe age of person[%d] is %d",i,person[i].age);
printf("\nthe salary of person[%d] is %f",i,person[i].slary);
}




}