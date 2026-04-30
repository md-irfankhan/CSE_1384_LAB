#include <stdio.h>
int main(){
    int i=2,fact=1,n;
    printf("Enter your number:");
    scanf("%d",&n);
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("Factorial:%d",fact);
}