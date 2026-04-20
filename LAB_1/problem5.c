#include <stdio.h>
#define PI 3.1416
int main(){
    int r;
    float perimetre,area;
    printf("Enter radious:");
    scanf("%d",&r);
    perimetre=2*PI*r;
    area=PI*r*r;
    printf("Area of Circle:%.2f \n",area);
    printf("Perimetre of Circle:%.2f",perimetre);
    return 0;


}
