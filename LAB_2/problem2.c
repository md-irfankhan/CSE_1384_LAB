#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter Num1:");
    scanf("%d",&num1);
    printf("Enter Num2:");
    scanf("%d",&num2);
    printf("Enter Num3:");
    scanf("%d",&num3);

    (num1>num2 && num1>num3)?printf("Num 1 is highest."):
        (num2>num3)?printf("Num2 is highest."):printf("Num3 is highest.");
    return 0;

}
