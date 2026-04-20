#include <stdio.h>
int main(){
    int length,breadth,perimetre,area;
    printf("Enter length:");
    scanf("%d",&length);
    printf("Enter breadth:");
    scanf("%d",&breadth);
    perimetre=2*(length+breadth);
    area=length*breadth;
    printf("Area:%d \n",area);
    printf("Perimetre:%d",perimetre);
    return 0;

}
