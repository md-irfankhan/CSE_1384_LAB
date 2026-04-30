#include <stdio.h>
int main(){
    char ch;
    printf("Enter Charecter:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A' ... 'Z':
        /* code */
        switch(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            case 1:
               printf("Vowel");
               break;
            case 0:
                printf("Consonent");
        }
        break;
    case 'a' ... 'z':
        switch(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            case 1:
               printf("Vowel");
               break;
            case 0:
                printf("Consonent");
        }
        break;  
    default:
        prinntf("Invalid Input");
        break;
    }
}