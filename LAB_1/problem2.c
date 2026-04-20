#include <stdio.h>
int main(){
    int a,b,sum,sub,mult;
    float div;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mult=a*b;
    div=(float)a/b;
    printf("a+b=%d \n",sum);
    printf("a-b=%d \n",sub);
    printf("a*b=%d \n",mult);
    printf("a/b=%.2f",div);
    return 0;


}
