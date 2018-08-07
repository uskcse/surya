#include<stdio.h>
void main()
{
  int year;
  printf("Input:");
  scanf("%d",&year);
  printf("\nOutput:");
  if(year%4==0)
  {  
     printf("\nyes");
  }
  else{
    printf("\nNo");
  }
}
