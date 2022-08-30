/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
      int a,b,c;
      printf("\nEnter the 2 nos : ");
      scanf("%d%d",&a,&b);
      printf("\n a : %d b : %d",a,b);
      
      c=a;
      a=b;
      b=c;
      printf("\n a : %d b : %d",a,b);
      

    return 0;
}
