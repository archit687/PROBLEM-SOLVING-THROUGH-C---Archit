#include<stdio.h>

// FUNCTION FOR CALL BY VALUE
int sum(int a,int b){

    return a + b;

}

// FUNCTION FOR CALL BY REFERENCE
int swap(int* a,int* b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    
}

int main(){

    int x = 10,y = 20;

    // CALL BY REFERENCE 
    printf("Using Call By Reference\n"); 
    printf("Before Swap : X = %d , Y = %d  \n",x,y);
    swap(&x,&y);
    printf("After Swap : X = %d , Y = %d  \n",x,y);

    //CALL BY VALUE
    int a = 54,b = 34;
    int i = sum(a,b);
    printf("Using Call By Value\n");
    printf("sum of A & B : %d\n",i);      
}


