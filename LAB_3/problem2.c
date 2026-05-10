#include <stdio.h>

int main(){
    char ch;
    printf("Enter your character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("%c is an uppercase alphabet.\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("%c is a lowercase alphabet.\n", ch);
    }
    else {
        printf("Invalid");
    }

    return 0;
}
