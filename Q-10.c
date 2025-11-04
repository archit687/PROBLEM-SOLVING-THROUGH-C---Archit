#include<stdio.h>

int main(){
    int final = 0;
    int num[] = {27, 84, 13, 59, 42, 91, 36, 75, 68, 10};
    
    
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            
            if (num[i] < num[j])
            {
                count++;
            }
            
        }
        
        if (count == 9)
        {
           final = num[i];
           break;
        }
        
        
    }

    printf("Smallest Number : %d \n",final);
    
}