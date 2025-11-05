#include<stdio.h>

// void simpleint(int principle,int interest,int time);

void simpleint(int principle,int interest,int time){
    int simINT = (principle * interest * time)/100;

    printf("Simple Interest = %d\n",simINT);
}

int main(){
    int principle,interest,time;

    printf("Enter Principle Amount\n");
    scanf("%d",&principle);

    printf("Enter Interest(Annual)\n");
    scanf("%d",&interest);

    printf("Enter Time Period(Year)\n");
    scanf("%d",&time);

    simpleint(principle,interest,time);

    return 0;

}