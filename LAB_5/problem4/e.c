#include <stdio.h>
int main(){
    int n,isPrime=1,i=2;
    printf("Enter your number:");
    scanf("%d",&n);
    while (i<=n/2)
    {
        if(n%i==0){
            isPrime=0;
            break;
        }
        i++;
    }
    (isPrime==1)?printf("Prime"):printf("Not Prime Number");
    
}