#include<stdio.h>
void myFunction(int num) {
    int odd=0,i;
    for(i=1;i<=num; i++) {
        if(i%2!=0) {
            odd=odd+i;
        }
    }
    printf("The sum of odd number %d\n",odd);
}

int main() {
    int num;
    printf("Enter The number");
    scanf("%d",&num);
    myFunction(num);



}