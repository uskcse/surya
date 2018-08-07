#include<stdio.h>
void main()
{
  int a[3];
  
  printf("Input:");
  scanf("%d %d %d",&a[0],&a[1],&a[2]);
  printf("\nOutput:");
  if(a[0]>=a[1]&&a[0]>=a[2])
  {
     printf("\n%d",a[0]);
  }else 
  if(a[1]>=a[0]&&a[1]>=a[2])
  {
      printf("\n%d",a[1]);
  }else 
  if(a[2]>=a[0]&&a[2]>=a[1])
  {
    printf("\n%d",a[2]);
  }
}
