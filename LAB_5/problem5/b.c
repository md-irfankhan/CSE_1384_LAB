#include <stdio.h>
int main()
{
    int i = 1, j, fact, sum=0;
    while (i <= 11)
    {
        j = 2;
        fact=1;
        if (i % 2 != 0)
        {
            while (j <= i)
            {
                fact = fact * j;
                j++;
            }
        
        sum=sum+fact;
        }
        i++;
    }
    printf("SUM:%d", sum);
}