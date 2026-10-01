#include <stdio.h>
int main(){
    char letter;
    printf("Enter A letter:");
    scanf("%c",&letter);
    if (letter =='a' || letter =='e' ||letter=='i'||letter =='o'||letter =='u'||letter =='A'||letter =='E'||letter =='I'||letter =='O'||letter =='U'){
        printf("The letter is a vowel");
    }
    else{
        printf("The letter is not a vowel");
    }
    return 0;
}