#include<stdio.h>
void main()
{
   int num;
   printf("Input:");
   scanf("%d",&num);
   printf("\nOutput:");
   if(num>=0)
   {
       if(num%2==0)
       {
         printf("\nEven");
       }
       else
        {
         printf("\nOdd");
        }
   }
   else
   {
        printf("\nInvalid");
   }

}
