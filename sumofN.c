#include<stdio.h>
void main()
{
   int N,n=0;
   printf("Input:");
   scanf("%d",&N);
   while(N>=0)
   {
      n=n+N;
      N--;
   }
   printf("\nOutput:");
   printf("\n%d",n);
}
