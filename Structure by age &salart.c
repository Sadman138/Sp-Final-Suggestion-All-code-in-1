#include<stdio.h>
struct person{
int age;
float salary;
};
int main(){

struct person person1={20,12500.50};
struct person person2={22,13500.20};
struct person person3=person2;

printf("Persion1:\n age is %d\n salary is %.2f",person1.age,person1.salary);
printf("\nPersion2:\n age is %d\n salary is %.2f",person2.age,person2.salary);
printf("\nPersion3:\n age is %d\n salary is %.2f",person3.age,person3.salary);



}