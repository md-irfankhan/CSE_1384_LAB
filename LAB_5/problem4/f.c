#include <stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("Enter your number:");
    scanf("%d",&n);
    while (i<n)
    {
        if(n%2==0){
            sum=sum+i;
        }
    }
    
    
}