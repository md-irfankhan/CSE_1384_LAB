#include <stdio.h>
#include <math.h>
int main(){
    int num,ld,temp,sum=0,pN;
    printf("Enter number:");
    scanf("%d",&num);
    pN=pow(num,2);
    while(pN!=0){
        ld=pN%10;
        pN=pN/10;
        sum=sum+ld;
    }
    (sum==num)?printf("Neon"):printf("Not a neon");
    
}