#include<stdio.h>

int main(){

    char name[10];

    printf("Enter Name\n");
    gets(name); // Used for taking the input from the user (String & Sentences)
    
    printf("PRINTING USING PRINTF() : %s \n",name);

    printf("PRINTING USING PUTS() : ");
    puts(name); // Prints & takes the cursor to the next line

    return 0;
}