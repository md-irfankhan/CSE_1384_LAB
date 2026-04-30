#include <stdio.h>
int main(){
    int mark;
    printf("Enter Number:");
    scanf("%d",&mark);
    switch (mark)
    {
    case 75 ... 100:
        printf("A");
        break;
    case 65 ... 74:
        printf("B");
        break;
    case 55 ... 64:
        printf("C");
        break;
    case 40 ... 54:
        printf("D");
        break;
    case 0 ... 39:
        printf("F");
        break;
    default:
        printf("Invalid Number");
        break;
    }
}