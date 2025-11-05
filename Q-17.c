#include<stdio.h>

int main(){
    
    char Digit,Character;

    printf("Enter a Digit => ");
    Digit = getchar(); // Takes Input of a single Character or digit
    printf("Enter a Character => ");
    Character = getchar();

    printf("Your Digit => ");
    putchar(Digit); // Gives Output of a single Character or digit
    printf("Your Character => ");
    putchar(Character);
    printf("\n");

    return 0;
}