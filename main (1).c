/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float km,m,cm,ft,i;
    printf("\nEnter the kilometer : ");
    scanf("%f" ,&km);
    m=km*1000;
    cm=m*100;
    i=cm/2.54;
    ft=i/12;
   printf("n km : %f",km);
   printf("n m : %f",m);
   printf("n cm : %f",cm);
   printf("n i : %f",i);
   printf("n ft : %f",ft);
   return 0;
}
