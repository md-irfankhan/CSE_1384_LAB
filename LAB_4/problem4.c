#include <stdio.h>
int main(){
    int num1,num2,sum,sub,mult;
    float div;
    char ch;
    printf("Calculate:");
    scanf("%d %c %d",&num1,&ch,&num2);
    
    switch (ch)
    {
    case '+':
        sum=num1+num2;
        printf("sum=%d",sum);
        break;
    case '-':
        sub=num1-num2;
        printf("sub=%d",sub);
        break;
    case '*':
        mult=num1*num2;
        printf("mult=%d",mult);
        break;
    case '/':
        div=(float)num1/num2;
        (div==(int)div)?printf("division=%.0f",div):printf("division=%.2f",div);
        break;
    
    default:
        break;
    }
}