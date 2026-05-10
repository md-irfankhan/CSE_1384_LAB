#include <stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    while (i<=n/2)
    {
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
    (sum==n)?printf("Perfect Number"):printf("Not a perfect number.");
    
}