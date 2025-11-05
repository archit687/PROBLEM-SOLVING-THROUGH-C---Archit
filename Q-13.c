#include <stdio.h>

void array(char *ptr);

void array(char *ptr)
{
    int i = 0;
    while (ptr[i] != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
}

int main(){

    char arr[]={'A','R','C','H','I','T','\0'};

    array(arr);
}