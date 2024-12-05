#include<stdio.h>
int main(){
char str[50];

int i,l,ispalindrome=1;
scanf("%s",str);
l =strlen(str);
for(i=0;i<l/2;i++){
if(str[i]!= str[l-i-1]){
ispalindrome=0;
break;
}
}
if(ispalindrome){
printf("%s is palindrome");}
else{
printf("%s is not palindrome");
}
}