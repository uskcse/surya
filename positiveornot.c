#include<stdio.h>
void main()
{
    double num;
    printf("Input:");
    scanf("%lf",&num);
    printf("\nOutput:");
    if(num>=0)
    {
       if(num==0)
       {
          printf("\nZero");
       }
       else
        {
           printf("\nPositive");
        }
    }
    else
    {
        printf("\nNegative");
    }

}
