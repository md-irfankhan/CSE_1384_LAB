#include <stdio.h>
int main(){
    int num,temp,ld,fact,sum=0,i;
    printf("Enter Number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        fact=1;
        i=2;
        ld=num%10;
        num=num/10;
        while(i<=ld){
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
    }
    (sum==temp)?printf("Strong"):printf("Not Strong");
}