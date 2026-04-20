#include <stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("Enter First Angle:");
    scanf("%d",&angle1);
    printf("Enter Second Angle:");
    scanf("%d",&angle2);
    angle3= 180-angle1-angle2;
    printf("Third angle is %d",angle3);

    return 0;

}

