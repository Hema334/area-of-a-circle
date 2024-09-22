/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {
   float pie = 3.14;
   int radius;
   printf("Enter The Radius of Cicle:");
   scanf("%d",&radius);
   printf("The radius of the circle is %d\n" , radius);
   float area = (float)(pie* radius * radius);
   printf("The area of the given circle is %f", area);
   return 0;
}