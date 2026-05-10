#include <stdio.h>

int main() {
    float result = 0;
    float numerator = 1;
    float denominator = 1;

    while(numerator<=32){
        result=result+(numerator/denominator);
        numerator=denominator;
        denominator=denominator*2;
    }
    printf("\nResult = %.4f\n", result);
    return 0;
}