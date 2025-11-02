#include <stdio.h>

int main()
{

    int number;
    char decision;

start:

    printf("Enter No. to compute square\n");
    scanf("%d", &number);

    int square = number * number;

    printf("The square of %d is %d\n", number, square);

    printf("Do you want to restart the program ? (Y/N) ");
    scanf(" %c", &decision);

    if (decision == 'y' || decision == 'Y')
    {
        goto start;
    }
    
    printf("PROGRAM ENDS\n");
    
    return 0;
}
