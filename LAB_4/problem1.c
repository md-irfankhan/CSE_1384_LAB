#include <stdio.h>
int main(){
    int weekN;
    printf("Enter Day No.");
    scanf("%d",&weekN);
    switch (weekN)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Wednesday");
        break;
    case 6:
        printf("Thrusday");
        break;
    case 7:
        printf("Friday");
        break;
    default:
        printf("Invalid");
        break;
    }
}