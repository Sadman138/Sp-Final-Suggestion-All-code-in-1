#include<stdio.h>
int main(){
int i,n;
scanf("%d",&n);
int A[100];
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
int smax=A[0];
int max=A[0];
for(i=0;i<n;i++){
if(A[i]>max){
smax=max;
max=A[i];
}
else if(smax<A[i] && max>A[i]){
smax=A[i];
}
}
printf("%d is max\n",max);
printf("%d is second max",smax);
}
