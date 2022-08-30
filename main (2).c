/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total;
    float average;
    printf("\nEnter the five marks : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    average=total/5.0;
    printf("\ntotal :%d",total);
    printf("\naverage : %f",average);
    return 0;
}
