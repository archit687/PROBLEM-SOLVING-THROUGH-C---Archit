//  Area of a circle and Circumference

#include<stdio.h>

int main(){
    int Radius;
    printf("Enter Radius\n");
    scanf("%d",&Radius);

    float Area = 3.14*(Radius*Radius);
    float Circumference = (2*3.14)*Radius;

    printf("The Area Of Circle = %.2f cm^2\n",Area);
    printf("The Circumference Of a Circle = %.2f cm\n",Circumference);

    return 0;
}