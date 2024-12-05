//0 1 1 2 3 5 8 fibonacci series
#include<stdio.h>

int main()
{
    int a[5],sum,i;
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(int i=0;i<5;i++){
     sum = sum + a[i];
     }
    printf("sum =%d\n",sum);
    printf("Avg=%d",sum/5);
    return 0;

    }