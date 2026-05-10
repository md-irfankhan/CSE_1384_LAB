#include <stdio.h>
int main(){
    int n,ld,sum=0,temp;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        ld=temp%10;
        temp=temp/10;
        sum=sum+ld;
    }
    (n%sum==0)?printf("Niven"):printf("Not a niven number");
}