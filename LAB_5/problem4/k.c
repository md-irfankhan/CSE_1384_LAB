#include <stdio.h>
int main(){
    int n,ld,sum=0,temp,product=1;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        ld=temp%10;
        temp=temp/10;
        sum=sum+ld;
        product=product*ld;
    }
    (product==sum)?printf("Spy Number"):printf("Not a Spy number");
}