#include<stdio.h>
struct Book{
char author[50];
char name[50];
float price;

};
int main(){

struct Book b1;
printf("Eter The author name\n");
gets(b1.author);
printf("Eter book name\n");
gets(b1.name);
printf("Eter The Book price\n");
scanf("%f",&b1.price);

printf("The author name : %s\n The name of book: %s\nThe price is %.2f\n",b1.author,b1.name,b1.price);




}