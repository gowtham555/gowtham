/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float f,c;
    printf("\nEnter the temperature : ");
    scanf("%f",&f);
    c=(f-32)*(5.0/9.0);
    printf("\nResults : %f",c);
    return 0;
}
