#include<stdio.h>
#include<stdlib.h>
void main() {
   char c;
   printf("input:");
   scanf("%c",&c);
   printf("\noutput:");
   if(isalpha(c))
   {
       printf("\nalphabet");
   }
   else
   {
       printf("\nNo");
}
}
