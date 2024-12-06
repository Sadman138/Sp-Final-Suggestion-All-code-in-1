#include<stdio.h>
struct Book{
char title[100];
char author[100];
float price;

};
int main(){

struct Book b1={"c-programming","Dennis Ritchel ",29.99};

printf("Book Title:%s\n Book Author:%s\n Book Price:%.2f\n",b1.title,b1.author,b1.price);

}