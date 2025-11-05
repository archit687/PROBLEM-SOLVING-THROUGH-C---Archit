#include <stdio.h>

int main()
{

    char a[20];

    printf("ENTER YOUR NAME\n");
    fgets(a, sizeof(a), stdin);

    printf("Your name is %s\n", a);
    // fputs(a,stdout);


    return 0;
}