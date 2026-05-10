#include <stdio.h>
#include <math.h>
int main(){
    int n,temp,ld,digit=0,pN;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    pN=n*n;
    while (temp!=0)
    {
        temp=temp/10;
        digit++;
    }
    
    if(pN%(int)pow(10,digit)==n){
        printf("Automorphic");
    }
    else{
       printf("Not Automorphic");
    }
   
    
}