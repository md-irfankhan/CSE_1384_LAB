#include <stdio.h>
#include <math.h>
int main() {
    int num,digit=0,ld,temp,sum=0,p;
    printf("Enter Number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        num=num/10;
        digit++;
    }
    num=temp;
    while(num!=0){
        ld=num%10;
        num=num/10;
        p=round(pow(ld, digit));
        // printf("%d \n",p);
        sum=sum+p;
    }
    // printf("%d",sum);
    (sum==temp)?printf("\nArmstrong"):printf("Not a Armstrong");
    return 0;
}