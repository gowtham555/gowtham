/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()

{
      float bs,da,hra,gs;
      printf("\nEnter Your Basic salary : ");
      scanf("%f" ,&bs);
      da=bs*0.4;
      hra=bs*0.2;
      gs=bs+da+hra;
     printf("\nBasic salary : %0.2f",bs);
     printf("\nda : %0.2f",da);
     printf("\nhra : %0.2f",hra);
     printf("\ngross salary : %0.2f",gs);
      return 0;
}
