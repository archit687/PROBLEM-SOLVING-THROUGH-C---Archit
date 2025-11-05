#include<stdio.h>

int main(){
    char st[10];
    int count = 0;
    printf("Enter a word\n");
    scanf("%s",&st);
    
    for (int i = 0; st[i] != '\0'; i++)
    {
        count++;
    }

    printf("Total Characters = %d\n",count);

    return 0;
    
}