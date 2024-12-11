#include<stdio.h>
int main() {
    int i,n;
    scanf("%d",&n);
    int A[100];
    for(i=0; i<n; i++) {
        scanf("%d",&A[i]);
    }
    int smin=A[0];
    int min=A[0];
    for(i=0; i<n; i++) {
        if(min>A[i]) {
            smin=min;
            min=A[i];
        }
        else if(smin>A[i] && min<A[i]) {
            smin=A[i];
        }
    }
    printf("%d is min\n",min);
    printf("%d is second min",smin);
}
