#include<stdio.h>

int main(){
    
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // Loop STOPED due to break
        }
        
        printf("Value of I = %d\n",i);
    }
    
}