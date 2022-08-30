/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float l,b,r_area,r_peri;
    printf("\nEnter the length&breath : ");
    scanf("%f%f",&l,&b);
    r_area=l*b;
    r_peri=(2*(l+b));
    printf("\nArea of rectangle : %f",r_area);
    printf("\nArea of perimeter : %f",r_peri);
    return 0;
}

    
