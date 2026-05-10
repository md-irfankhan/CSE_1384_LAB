#include <stdio.h>
int main()
{
    int n, ld, sum, temp, product = 1;
    ;
    printf("Enter number:");
    scanf("%d", &n);
    temp = n;
    while (temp > 9)
    {
        sum=0;
        while (temp != 0)
        {
            ld = temp % 10;
            temp = temp / 10;
            sum = sum + ld;
            
        }
        temp=sum;
    }
    (temp == 1) ? printf("Magic") : printf("Not a Magic number");
}