#include<stdio.h>

int main(){
   char name[] = "ARCHIT";

   fputs("Your Name = ",stdout);
   fputs(name,stdout);
   fputs("\n",stdout);

   return 0;
}
