//N,k input N number of input,k add 
#include<stdio.h>
void main()
{
   int N,K,a[1000],i,n=0;
   printf("Input:");
   scanf("%d%d",&N,&K);
   for(i=0;i<N;i++)
     scanf("%d",&a[i]);
   printf("\nOutput:");
   while(K>0)
   {
       n=n+K;
       K--;
   }
   printf("\n%d",n);
}
