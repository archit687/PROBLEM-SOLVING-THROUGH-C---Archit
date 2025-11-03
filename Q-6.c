#include<stdio.h>

int main(){
    int a,fact;
    printf("Enter No. to find out the Factorial\n");
    scanf("%d",&a);

    if (a < 0)
    {
        printf("Can't Find Out Factorial of negative no.\n");
    }
    else{
        fact = 1;

        for (int i = 1; i <= a; i++) // 1x2x3x4x5x6
        {
            fact = fact * i;
        }
        printf("Factorial of %d = %d\n",a,fact);
    }

    
    
}