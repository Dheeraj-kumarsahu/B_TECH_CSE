#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch(ch){
        case 'a':
        printf("The character is a vowel.\n");
        break;
        case 'e':
        printf("The character is a vowel.\n");
        break;
        case 'i':
        printf("The character is a vowel.\n");
        break;
        case 'o':
        printf("The character is a vowel.\n");
        break;
        case 'u':
        printf("The character is a vowel.\n");
        break;
        case 'A':
        printf("The character is a vowel.\n");
        break;
        case 'E':
        printf("The character is a vowel.\n");
        break;
        case 'I':
        printf("The character is a vowel.\n");
        break;
        case 'O':
        printf("The character is a vowel.\n");
        break;
        default:
        printf("The character is a consonant.\n");

    }
    return 1;
}