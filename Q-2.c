// Program to inerchange values of two variable without using third variable

// #include<stdio.h>

// int main(){
//     int a = 10,b= 20,temp;
 
//     printf("Before Swaping A = %d B = %d\n",a,b); 

//     temp = a;
//     a = b;
//     b = temp;

//     printf("After Swaping A = %d B = %d\n",a,b);
    
// }


#include<stdio.h>

int main(){
    int a = 10,b = 20;

    printf("Before Swap A = %d B = %d\n",a,b);

    a = a + b; // a = 30
    b = a - b; // b = 10
    a = a - b; // a = 20

    // Final Value A = 20 B = 10
     
    printf("After Swap A = %d B = %d\n",a,b); 
}