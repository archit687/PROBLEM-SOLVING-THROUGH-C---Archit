#include<stdio.h>

int main(){
    
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // Skipped printing 3
        }
        
        printf("Value of I = %d\n",i);
    }
    
}