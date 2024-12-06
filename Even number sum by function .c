#include<stdio.h>
void myFunction(int num) {
    int even=0,i;
    for(i=0; i<num; i++) {
        if(i%2==0) {
            even=even+i;
        }
    }
    printf("The sum of even number %d\n",even);
}

int main() {
    int num;
    printf("Enter The number");
    scanf("%d",&num);
    myFunction(num);



}