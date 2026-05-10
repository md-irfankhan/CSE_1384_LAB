#include <stdio.h>
int main(){
    int num,ld,isDuck=0;
    printf("Enter number:");
    scanf("%d",&num);
    while (num!=0)
    {
        ld=num%10;
        num=num/10;
        if (ld==0){
            isDuck=1;
        }
    }
    (isDuck==1)?printf("Duck"):printf("Not Duck");
    
}